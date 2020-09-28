#include "malloc.h"
#include "history.h"

List* init_history(){
  struct List* new_list = NULL;
}

void add_history(List *list, char*str){
  Item *head = list->root;
  Item *last = head;
  Item *new_item = (Item*) malloc(sizeof(List));
  new_item->str = str;
  new_item->next = NULL;

  if(head == NULL){
    head = new_item;
  }
  while(last->next != NULL){
    last = last->next;
  }
  last->next = new_item;

  return;
  

  

}
