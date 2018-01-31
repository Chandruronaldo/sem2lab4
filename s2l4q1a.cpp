//____________Stacks using Linked list____________
#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class StackLL
{
	private:
	node *top;//The top element of the stack
	
	public:
	StackLL()//Default constructor
	{
		top=NULL;
	}
	
	void push(int val)
	{
		node *temp=new node;
		temp->data=val;
		temp->next=NULL;//A new node has been created
		if(top==NULL)
		{
			top=temp;
		}
		else
		{
			temp->next=top;
			top=temp;//THe element inserted in the top of the stack ****NOTE:::ELEMENTS CAN ONLY BE INSERTED IN THE TOP
			cout<<"\n Insertion success!";
		}
	}
	
	void pop()
	{
		if(top==NULL)
		{
			cout<<"\n***ERROR*** The stack is empty!";
		}
		else
		{
			node *temp=new node;
			temp=top;
			top=top->next;//the succeeding element of top is assigned as the new top element
			delete temp;//the prev top element is deleted ****NOTE:THE ELEMENTS ON THE TOP ONLY CAN BE DELETED
			cout<<"\nDeletion success!";
		}
	}
	
	void display()
	{
		node *gamma=new node;
		gamma=top;
		if(gamma==NULL)
		{
			cout<<"\n****ERROR**** The stack is empty!";
			
		}
		else
		{
			cout<<"\n|***TOP***|\n----------";
			do
			{
				cout<<"\n|   "<<gamma->data<<"    |\n----------";
				gamma=gamma->next;
			}while(gamma->next!=NULL);
		}//displaying from the top to end
			cout<<"\n|   "<<gamma->data<<"    | -->END OF STACK\n----------";
	}
};



int main() {
	StackLL a;
	int choice, val,again;
            cout<<"\n:: Stack using Linked List ::\n";
	    do{
            cout<<"\n--->OPTIONS<---\n";
            cout<<"1. Push\n2. Pop\n";
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice){
	 case 1: cout<<"\nEnter the value to be insert: ";
                     cin>>val;
	         a.push(val);
	         a.display();
	         break;
	 case 2: a.pop();
	         a.display();
	         break;
	 default: cout<<"\nError!! Wrong info\n";
      }
      cout<<"\n\n Do you want to edit the stack ?\n1. Yes \n2. No";
      cin>>again;
   }while(again!=2);
	return 0;
}
