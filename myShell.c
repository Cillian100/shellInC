#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//https://www.educative.io/answers/resolving-the-function-returns-address-of-local-variable-error

void parseUserInput(){
  
}

char *userInput(){
  char buffer[50];
 
  printf("Enter a string: ");

  if(!(fgets(buffer, sizeof(buffer), stdin)!=NULL)){
    printf("Error reading input\n");
  }

  return buffer;
}

void infiniteLoop(){
  printf("> ");
  userInput();
  infiniteLoop();
}

int main(int argc, char **argv){
  infiniteLoop();
}
