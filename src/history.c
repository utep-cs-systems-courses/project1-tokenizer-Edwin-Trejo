#include "malloc.h"
#include "history.h"

List* init_history(){
  struct List* new_list = NULL;
}

/*adds a new node to the linked list, if the linked list is empty the node added will be assigned as the root, if not, the while loop will continue until the next node is NULL, then it will insert the next node there */
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

char *get_history(List *list, int id){
  return 0;
}

/*This functions goes through the linked list printing each of the items data as it goes through all of them*/
void print_history(List *list){
  Item *current = list->root;
  while(current != NULL){
    printf("%s ", current->str);
    current = current->next;
  }
}

void free_history(List *list){
}
