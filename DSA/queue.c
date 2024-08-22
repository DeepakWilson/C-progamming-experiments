#include<stdio.h>


int front=-1;
int rear=-1;
void enqueue(int queue[],int size)
{
int item;
  if(rear==size-1)
{
  printf("Overflow");
}
else if(front==-1&&rear==-1)
{
front=0;rear=0;
 printf("Enter the item\n");
 scanf("%d",&item);
 rear=rear+1;
 queue[rear]=item;
 }
 else{
 rear=rear+1;
 printf("Enter the element :");
 scanf("%d",&item);
 queue[rear]=item;
 
}
}
void dequeue(int queue[],int size)
 {
 int item;
if(rear==-1&&front==-1)
 {
   printf("Underflow");
 }
else if(front==rear){
printf("Deleted element is%d",queue[front]);
front=rear=0;
}
else{

  
   item=queue[front];
   front=front+1;
   printf("The element to be deleted is is %d",item);
 }
}
void display(int queue[],int size)
{
 if(front==-1 &&rear==-1)
{
 printf("Queue is empty\n");
}
else{
  printf("The elements in the queue is:\n");
for(int i=front;i<rear;i++)
{
   printf("%d\n",queue[i]);
}
}
}
int main()
{
int choice,size;
printf("Enter the Size:");
scanf("%d",&size);
int queue[size];

char c='n';
while(c=='n')
{

printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
  enqueue(queue,size);
case 2:
  dequeue(queue,size);
  break;
case 3:
  display(queue,size);
  break;
case 4:
  printf("Do you want to exit(y/n):");
  getchar();
  scanf("%c",&c);
  printf("Exiting....");
  break;
  default:
  
  break;
}
}
return 0;
}

