#include <stdio.h>
#include "tokenizer.h"

int main()
{
  printf("Welcome!\n");

  char str[30];
  printf("Enter a string:\n");
  fgets(str,30,stdin);
  

  if(space_char(str[0]) == 1){
    printf("Please enter a valid string\n");
  }
  else{
    printf("\nYou entered: %s",str);
  }

  // print_tokens(tokenize(str));
  
  
  




 
  return 0;
}
