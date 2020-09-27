#include <stdio.h>
#include "tokenizer.h"

int main()
{
  printf("Welcome!\n");


  char str[30];
  printf("Enter a string:\n");
  fgets(str,30,stdin);

  printf("\nYou entered: %s",str);





 done:
  return 0;
}
