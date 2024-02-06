

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* link;
};

struct Node* top = NULL;

void Push(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof( struct Node*));
    temp->data = x;
    temp->link = top;
    top = temp;
}

void Pop(){
    struct Node *temp;
    if(top == NULL) return;
    temp = top;
    top = top->link;
    free(temp);
}

int isEmpty(){
    if(top == NULL)
        return 1;
    else
        return 0;
}

int Top(){
    return top->data;
}

int Print(){
    struct Node* temp = top;
    if(isEmpty == 1){
        printf("Stack is Empty");
        return;
    }

    printf("Top| ");
    while(temp != NULL){
        printf("%d > ",temp->data);
        temp = temp->link;
    }
    printf("|End");
}

int main()
{
   int choice,enter;
   printf("--------- Welcome to Stach -------\n\n");

    while(choice =! 0){

            printf("\nPlease ENTER your choice\n");
            printf("1. Push\n");
            printf("2. Pop\n");
            printf("3. What is Top ?\n");
            printf("4. Is Stack Empty ?\n");
            printf("5. Print Stack\n");

            printf("Choice: ");

            scanf("%d",&choice);
            printf("\n");

            switch(choice){

            case 1: printf("Enter the number for Push\n");
                    scanf("%d",&enter);
                    Push(enter);
                    break;

            case 2: Pop(enter);
                    printf("It's popped!\n");
                    break;

            case 3: enter = Top();
                    printf("Top is = %d\n",enter);
                    break;

            case 4: enter = isEmpty();
                    if(enter == 1)
                    printf("Yes, It's empty\n");
                    else
                    printf("Nope, It contains elements\n");
                    break;

            case 5: printf("Stack Elements: \n");
                    Print();
                    break;

            default : printf("Enter numbers between 1 and 5 !");
                      break;
            }

                    }

  system("PAUSE");
  return 0;
}
