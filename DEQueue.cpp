#include<stdio.h>
int DQ[10];
int m =10;
int rear=-1;
int front=-1;
void insertR(int val)
{
	if(front ==-1 && rear==-1)
	{
		front=0;
		rear=0;
		DQ[rear++]=val;
		rear++;
	}
	else if (rear == m)
	{
		printf ("OVERLOADED QOUEUE");
	}
	else
	    DQ[rear++]=val;
}
void deleteR()
{
	if (rear ==-1 && front==-1)
	 {
        printf("Underflow: Unable to delete element from the rear. Deque is empty.\n");
        return;
    }
    if (front == rear) {  // Deque has only one element
        front = -1;
        rear = -1;
    }
	 else if (rear == 0)
	  {
        rear = m - 1;  // wrap around
    } else 
	{
        rear = rear - 1;
    }
    printf("Deleted %d from the rear.\n", DQ[rear]);
}
void insertF(int val)
{
    if (front == m) 
	{
        printf("Overflow: Unable to insert element at the front. Deque is full.\n");
        return;
    }

    if (front == -1) {  // If deque is initially empty
        front = 0;
        rear = 0;
    } 
	else if (front == 0) 
	{
        front = m - 1;  // wrap around
    } 
	else {
        front = front - 1;
    }

    DQ[front] = val;
    printf("Inserted %d at the front end.\n", val);
}
void deleteF()
{
	if (front==-1)
	{
		printf("UNDERFLOW DQ");
	}
	else 
	 {
	 	printf("DELETED ITEM = %d", DQ[rear--]);
	 }	
}
void display()
{
	if(rear==-1 && front==-1)
	printf("UNDERFLOW");
	else if (front== rear)
	 {
	 	 front = -1;
        rear = -1;
	 }
	else
	{
    printf("DQueue elements are=");
    for(int i=front;i<rear;i++)
	{ 
		printf("\n %d",DQ[i]);
	}
}
}
int main()
{
	int ch;
	int val;
	while(1)
	{
	printf("\n MENU");
	printf("\n ENTER 1 TO INSERT FROM REAR \n 2 TO DELETE FROM REAR \n 3 TO INSERT FROM FRONT \n 4 TO DELETE FROM FRONT \n 5 to display the dqueue \n 6 to exit");
	scanf("%d",&ch);
	switch(ch)
	{
    case 1:
    	printf("ENTER THE ELEMENT TO INSERT");
    	scanf("%d",&val);
    	insertR(val);
    	break;
    case 2:
    	deleteR();
    	break;
    case 3:
    	printf("ENTER THE ELEMENT TO INSERT");
    	scanf("%d",&val);
    	insertF(val);
    	break;
    case 4: 
        deleteF();
    	break;
    case 5:
    	display();
    	break;
    case 6:
    	printf("LOOP TERMINATED");
    	break;
}
}
}
