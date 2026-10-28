  1 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct Node{
  4     int data;
  5  struct Node* next;
  6 };
  7 int main(){
  8     struct Node * front =NULL;
  9     struct Node * rear =NULL;
 10     struct Node * newNode,* temp;
 11     int choice,value;
 12     while (1){
 13         printf("\n-- Queue using linked list --\n");
 14         printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
 15         printf ("Enter your choice :");
 16         scanf("%d", & choice);
 17         switch (choice){
 18 case1:
 19         printf("Enter value to enquence:");
 20         scanf ("%d",&value);
 21             newNode = (struct Node*)malloc(sizeof (struct Node));
 22         if (newNode == NULL){
 23             printf("Queue overflow\n");
 24             break;
 25         }
 26         newNode-> data= value;
 27         newNode-> next =NULL;
 28         if (rear == NULL){
 29             front = rear = newNode;
 30         }
 31         else{
 32             rear -> next =newNode;
 33             rear = newNode;
 34         }
 35         printf("%d enqueued to queue \n",value);
 36         break;
 37 case2:
 38         if (front== NULL){
 39             printf ("Queue underflow\n");
 40             break;
 41         }
 42         temp= front;
 43         printf("%d dequeued from queue\n", front-> data);
 44         front = front->next;
 45         if (front == NULL)
 46             rear=NULL;
 47         free(temp);
          break;
case3:
 50         if(front == NULL){
 51             printf ("Queue is empty \n");
 52             break;
 53         }
 54        temp=front;
 55        printf("Queue elements: ");
 56        while (temp !=NULL){
 57            printf("%d->", temp -> data);
 58            temp = temp->next;
 59        }
 60        printf("NULL\n");
 61        break;
 62 case4:
 63        exit(0);
 64 defualt:
 65            printf("Invalid choice  \n");
 66     }
 67   }
 68            return 0;
 69     }
