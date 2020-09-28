#include "malloc.h"
#include "tokenizer.h"

int space_char(char c)
{
  if(c == '\t' || c == ' '){
    return 1;
  }
  return 0;
}

int non_space_char(char c)
{
  if(c == '\t' || c == ' '){
    return 0;
  }
  return 1;
}

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

char *word_terminator(char *word){
  char *str = word_start(word);
  char *ptr;
  for (int i =0; word[i] != '\t'; i++) {
    if(word[i] != ' ' && word[i+1] == ' ' ){
      ptr = &(word[i]);
      return ptr;
    }
  }
  return 0;
}

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

void print_tokens(char **tokens){
}

void free_tokens(char **tokens){
}
  
  
