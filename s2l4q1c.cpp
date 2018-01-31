//___________ Stacks using Array ____________
#include <iostream>
using namespace std;

#define MAX 1000//Maximum size of array
class StackA
{
	private:
	int top; //The top element of the stack
	int a[MAX];//The array declaration
	public:
	
	StackA()
	{
		top=-1;//The top element is initialized to be -1 because array entry starts from 0
	}
	
	void push(int val)
	{
		if(top==MAX)
		{
			cout<<"\n****ERROR**** Stack Overflow!";
		}
		else
		{
			++top;
			a[top]=val;//The element is added to the top of the stack(here rear end of the array)
		}
	}
	
	void pop()
	{
		if(top==-1)
		{
			cout<<"****ERROR**** Stack is empty!";
		}
		else
		{
			--top;//The access to the element at the top is lost
		}
	}
	
	void display()
	{
		if(top==-1)
		{
			cout<<"\n****ERROR****Stack is empty!";
		}
		else
		{
			cout<<"\n|***TOP***|\n----------";
		            int temp;
		            do
			{
				temp=top;
				cout<<"\n|   "<<a[temp]<<"    |\n----------";
				--temp;
			}while(temp!=-1);
		}
			cout<<"\n|   "<<"    | -->END OF STACK\n----------";
	}

	
};
int main() {
	StackA a;
	int choice, val,again;
            cout<<"\n:: Stack using Linked List ::\n";
            do{
            cout<<"\n--->OPTIONS<---\n";
            cout<<"1. Push\n2. Pop\n3. Display\n";
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice){
	 case 1: cout<<"\nEnter the value to be insert: ";
             cin>>val;
	         a.push(val);
	         break;
	 case 2: a.pop();
	         break;
	 case 3: a.display(); 
	         break;
	 default: cout<<"\nError!! Wrong info\n";
      }
      cout<<"\n\n Do you want to edit the stack ?\n1. Yes \n2. No";
      cin>>again;
   }while(again!=2);
	return 0;
}