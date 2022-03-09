#include<stdio.h>
#include<stdlib.h>

struct list
{
int item;
struct link *next;
};
struct list *head=NULL,*newnode,*temp,*temp1;

void creation()
{
int ch,item;
do{

newnode=(struct list*)malloc(sizeof(struct list));
if(head==NULL)
{
head=newnode;
}
else
{
temp->next=newnode;
}
temp=newnode;

printf("Enter the value to insert:\n");
scanf("%d",&item);
temp->next=NULL;
printf("Enter the operation to perform(1/0):");
scanf("%d",&ch);
}while(ch==1);
}

int main()
{
int choice;
printf("Linked List Stack Operations\n");
printf("Creation of node\n");
printf("----------------\n");
creation();//Creation Function
while(1)
{
    printf("\nLinked List Stack Operations:\n");
    printf(" 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    scanf("%d",&choice);

switch(choice)
{
case 1:
       pushatend();
       break;
case 2:
       popatend();
       break;
case 3:
       display();
       break;
case 4:
       exit(0);
       break;
default:
        printf("You have entered a wrong choice:");
}
}

}

void pushatend()
{

int item;

newnode=(struct list*)malloc(sizeof(struct list));

temp=head;

while(temp->next!=NULL)
{
 temp=temp->next;
}
temp->next=newnode;
printf("Enter the value to insert:\n");
scanf("%d",&temp->item);
newnode->next=NULL;

}

void popatend()
{
temp=head;

while(temp->next!=NULL)
{
 temp1=temp;
 temp=temp->next;
}
temp1->next=NULL;
free(temp);
}


void display()
{

temp=head;

while(temp->next!=NULL)

{
 printf("%d",temp->item);
 temp=temp->next;

}


}




