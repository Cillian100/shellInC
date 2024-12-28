#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char buffer[50];
char toks[50][50];

char **parseUserInput(char *poop){
  char** row=malloc(50*sizeof(char*));
  char *token;
  int counter=1;
  token = strtok(poop, ";");
  row[0]=token;
  while(token!=NULL){
    token = strtok(NULL, ";");
    if(token!=NULL){
      row[counter]=token;
    }
    counter++;
  }

  return row;
}

char *userInput(){
  if(!(fgets(buffer, sizeof(buffer), stdin)!=NULL)){
    printf("Error reading input\n");
  }
  return buffer;
}

void infiniteLoop(){
  printf("> ");
  char *poop=userInput();
  char **poopTwo=parseUserInput(poop);
  infiniteLoop();
}

int main(int argc, char **argv){
  infiniteLoop();
}
