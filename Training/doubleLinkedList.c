#include<stdio.h>
#include<stdlib.h>
struct node 
{
  int value;
  struct node *next;
  struct node *prev;
};
void addToList(struct node *newNode, int input)
{
  while(newNode->next!=NULL)
  {
    newNode = newNode -> next;
  }

  newNode->next = (struct node *)malloc(sizeof(struct node));
  (newNode->next)->prev = newNode;
  newNode = newNode->next;
  newNode->value = input;
  newNode->next = NULL;
}
void deleteFromList(struct node *pointer, int input)
{
  /* Go to the node for which the node next to it has to be deleteFromListd */
  while(pointer->next!=NULL && (pointer->next)->value != input)
  {
    pointer = pointer -> next;
  }

  if(pointer->next==NULL)
  {
    printf("Element %d is not present in the list\n",input);
    return;
  }
        /* Now pointer points to a node and the node next to it has to be removed */
  struct node *temp;
  temp = pointer -> next;
        /*temp points to the node which has to be removed*/
  pointer->next = temp->next;
  temp->prev =  pointer;
        /*We removed the node which is next to the pointer (which is also temp) */
  free(temp);
        /* Beacuse we deleteFromListd the node, we no longer require the memory used for it . 
           free() will deallocate the memory.
         */
        return;
}
void print(struct node *pointer)
{
  if(pointer==NULL)
  {
    return;
  }
  printf("%d ",pointer->value);
  print(pointer->next);
}

int main()
{
  /* start always points to the first node of the linked list.
  temp is used to point to the last node of the linked list.*/
  struct node *head, *temp;
  head = (struct node *)malloc(sizeof(struct node)); 
  temp = head;
  temp -> next = NULL;
  temp -> prev = NULL;
  int choice, input, status;
        /* Here in this code, we take the first node as a dummy node.
           The first node does not contain data, but it used because to avoid handling special cases
           in addToList and deleteFromList functions.
         */
  do
  {
    printf("1. Add\n");
    printf("2. Delete\n");
    printf("3. Print\n");
    printf("0. End\n");
    printf("Choose function: ");
    printf("\n");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1 :
        printf("Input a value: ");
	scanf("%d", &input);
	addToList(head, input);
	printf("\n");
	break;
      case 2 :
	printf("Input a value to delete: ");
	scanf("%d", &input);
	deleteFromList(head, input);
	break;
      case 3 :
	printf("List: ");
	print(head->next);
	printf("\n");
	break;
    }
  } while (choice != 0);
}

