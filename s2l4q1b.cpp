//__________Queue using linked list___________
#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class QueueLL
{
	private:
	node *front,*rear;
	
	public:
	QueueLL()//Defaut constructor
	{
		front=NULL;
		rear=NULL;
	}
	
	void enqueue(int val)
	{
		node *temp=new node;
		temp->data=val;
		temp->next=NULL;// A new node has been created 
		if(rear==NULL)
		{
			front=temp;
			rear=temp;
			
		}
		else
		{
			rear->next=temp;
			rear=temp;
			cout<<"\n Insertion successful!";//THe node has been inserted at the end of the queue
		}
	}
	
	void dequeue()
	{
		node *temp=new node;
		temp=front;
		if(front==NULL)
		{
			cout<<"\n The queue is empty!";
		}
		else
		{
			front=front->next;
			delete temp;
			cout<<"\n Deletion successful!";//The element at the front position is deleted
		}
	}
	
	void display()
	{
		node *temp=new node;
		temp=front;
		cout<<"\n Front-->";
		while(temp->next!=NULL)
		{
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
		cout<<temp->data<<"-->";
		cout<<"Rear";
		
	}
};
int main() {
	QueueLL a;
	int choice, val,again;
            cout<<"\n:: Queue using Array ::\n";
            do{
            cout<<"\n--->OPTIONS<---\n";
            cout<<"1. EnQueue\n2. DeQueue\n ";
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice){
	 case 1: cout<<"\nEnter the value to be insert: ";
                     cin>>val;
	         a.enqueue(val);
	         a.display();
	         break;
	 case 2: a.dequeue();
	         a.display();
	         break;
	 default: cout<<"\nError!! Wrong info\n";
      }
      cout<<"\n\n Do you want to edit the Queue ?\n1. Yes \n2. No";
      cin>>again;
   }while(again!=2);

	return 0;
}