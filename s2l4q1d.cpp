// ______________ Queue using Array_____________
#include <iostream>
using namespace std;

#define MAX 1000  //the maximum size of the array

class QueueA
{
	private:
	int front , rear;
	int a[MAX];
	public:
	QueueA()//default constructor
	{
		front=0;
		rear=0;
	}
	
	void enqueue(int val)//To insert an element in the queue ****NOTE::INSERTION ALWAYS TAKES PLACES AT THE REAR SIDE*****
	{
		if(rear==MAX)
		{
			cout<<"\n The Queue is full!";
		}
		else
		{
			a[rear]=val;//The element is added
			++rear;//the rear value is incremented
			cout<<"\n Enqueue successful!";
		}
	}
	
	void dequeue()//To delete an element *****NOTE:: Deletion always takes place in the front side
	{
		if(front==rear)
		{
			cout<<"\n THe queue is empty!";
		}
		else
		{
			++front;//The access to the first element is cut off
			cout<<"\n Dequeue successfull";
		}
	}
	
	void display()
	{
		int k=front;
		cout<<"\n Front-->";
		do
		{
			cout<<a[k]<<"-->";
			k++;
		}while(k!=rear);
		cout<<"Rear\n";
	}//Displaying all ements from front to rear
	void size()
	{
		cout<<"\n The size of the queue is :" <<rear-front;
	}
};
	
	
	

int main() {
	QueueA a;
	int choice, val,again;
            cout<<"\n:: Queue using Array ::\n";
            do{
            cout<<"\n--->OPTIONS<---\n";
            cout<<"1. EnQueue\n2. DeQueue\n 3.Size\n";
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
	 case 3: a.size();
	         break;
	 default: cout<<"\nError!! Wrong info\n";
      }
      cout<<"\n\n Do you want to edit the Queue ?\n1. Yes \n2. No";
      cin>>again;
   }while(again!=2);
	return 0;
}