#include "malloc.h"
#include "tokenizer.h"
/*this function looks for a space char ' ' */
int space_char(char c)
{
  if(c == '\t' || c == ' '){
    return 1;
  }
  return 0;
}

/*This function looks for a non space char*/
int non_space_char(char c)
{
  if(c == '\t' || c == ' '){
    return 0;
  }
  return 1;
}
/*This function uses a for loop to go through the string looking for a certain condition in order to determin if that char is the beginning of a word*/
char *word_start(char *str)
{
  char *ptr;
  for(int i = 0; str[i] != '\t'; i++){
    if(str[i] == ' ' && str[i+1] != ' '){
      ptr = &(str[i+1]);
      return ptr;
    }
  }
  return 0;
}
/*just as word_Starter, this function compares each character in order to find the last char of a word */

char *word_terminator(char *word){
  char *ptr;
  for (int i =0; word[i] != '\t'; i++) {
    if(word[i] != ' ' && word[i+1] == ' ' ){
      ptr = &(word[i]);
      return ptr;
    }
  }
  return 0;
}
/*It goes through the whole string, char by char looking for spaces ' ', when it find one and it is not the end of the string it adds one word to the count */

int count_words(char *str){
  int count = 0;
  if(str[0] == '\0' || str[0] == ' '){
    return 0;
  }
  for (int i = 0; str[i] != '\t';i++){
    if(str[i] == ' ' && str[i+1] != ' '){
      count++;
    }
  }
  return count+1;
}
/*First it allocates memory by using malloc, and the size of len, then the for loop copies the string, or in this case the array into the new one and returns it */

char *copy_str(char *inStr, short len){
  char *ptr;
  char *str = (char*)malloc(len*sizeof(char));
  
  for (int i = 0; str[i] != '\0'; i++) {
    *ptr = *inStr;
    ptr++;
    inStr++;
  }
  return str;
}

char **tokenize(char* str){
  int words = count_words(str);

  
  return 0;
}
/*This function uses a for loop to go through **tokens, and then print each word as it goes */

void print_tokens(char **tokens){
  for (int i = 0; *tokens !=""; i++) {
    printf("%s\n",*tokens[i]); 
  }
}

/*similar to print_tokens, this function uses a for loop to go through tokens and free the memory on them*/
void free_tokens(char **tokens){
  for (int i = 0; *tokens !=""; i++) {
    free(tokens[i]);
  }
}
  
  
