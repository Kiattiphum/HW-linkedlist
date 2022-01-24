#include <stdio.h>
#include "node.h"
#include <stdlib.h>
#include <string.h>

int main() {
  int check, count=0;
  NODE *head,*temp;
  head = NULL;
  for(int i=0; i>=0; i++){
    printf("ID :");
    scanf("%d", &check);
    if(check != 0){
      temp = (NodePtr) malloc(sizeof(NODE));
      temp->id = check;
      printf("Name : ");
      scanf("%s",temp->name);
      temp->next = head;
      head = temp;
      count++;
    }else break;
  }
  printf("\nnode creating time = %d\n",count);
  if(count){
    count = 0;
    for(temp = head ; temp != NULL ; temp = temp->next){
      printf("%3d ",temp->id);
      printf("and %s ->",temp->name);
    }
    printf(" NULL\n");
    
    printf("\nhead = %p\n",head);
    printf("temp = %p\t",temp);
    temp = head;
    printf("but now temp = %p\n",temp);
    //why I can use for??? 
     
    while(temp!=NULL){
      head = temp;
      temp=temp->next;
      free(head);
      count++;
    }
    head = temp;
    
    /*
    for(head=temp;head!=NULL;head=head->next){
      temp = head;
      free(temp);
      count++;
    }
    temp = head;
    */

    //free will free malloc and pointer will move to NULL
    printf("\nfree time = %d",count);
    printf("\nhead = %p\n",head);
    printf("temp = %p\n",temp);
    if(head==NULL && temp==NULL) printf("Wow");
    printf("\n");
    for(head=temp;head!=NULL;head=head->next){
      printf("%3d ",head->id);
      printf("and %s->",head->name);
    }
    printf("NULL\n");
  }
  else{
    printf("Bruh\n");
  }
  return 0;
}