#include<iostream>
#include<string>

using namespace std;

class Stack{
	private:
	 int top;
	 int arr[5];

	public:
	//Intially stack is null..
	 Stack()
	 {
		top=-1;
		for(int i=0;i<5;i++)
	   {
		arr[i]=0;
           }
	}
	//Check the stack is empty or not?

	bool isEmpty()
	{
		if(top==-1)
		 return true;
		else
		 return false;
	}
	//Check the stack is full or not?
	
	bool isFull() // bool is a data type with two possible values: true or false..
	{
		if(top==4)
		 return true;
		else
		 return false;
	}
	//For insert the value in the stack..
	
	void push(int val)
	{
		if(isFull()) //check the stack is full..
		{
		 cout<<"stack overflow"<<endl;
		}
		else
		{
		 top++;
		 arr[top]=val;
		}
	}
	//For delete the value in the stack..
	
	int pop()
	{
		if(isEmpty()) //check the stack is empty..
		{
		 cout<<"stack underflow"<<endl;
		 return 0;
		}
		else
		{
		 int popValue = arr[top];
		 arr[top] = 0;
		 top--;
		 return popValue;
		}
	}
	//For count(get the number of items in the stack) the value in the stack..
	
	int count()
	{
		return(top+1);
	}
	// For peek(access the item at the i position) the value in the stack..
	
	int peek(int pos)
	{
		if(isEmpty())
		{
		 cout<<"stack Underflow"<<endl;
		 return 0;
		}
		else
		{
		 return arr[pos];
		}
	}
	//For change(change the item at the i position) the value in the stack..
)
	void change(int pos, int val)
	{
	 arr[pos]=val;
	 cout<<"value changed at location" <<pos<<endl;
	}
	//For display(display all items in the stack) the value in the stack..
	
	void display()
 	{
		cout<<"All value are in stack"<<endl;
		for(int i = 4;i>=0;i--)
		{
		 cout<<arr[i]<<endl;
		}
	}



};

int main()
{
	Stack s1;
	int option,position,value;
	//Run all the function..
	do
	{
		cout<<"What opertion do you want to perform? Select Option number.Enter 0 to exit."<<endl;
		cout<<"1. Push()"<<endl;
		cout<<"2. Pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. clear Screen()"<<endl;

		cin>>option;
		switch(option)
		{
			case 0:
			  break;
			case 1: //For push operation
			 cout<<"Enter an item to push in the stack"<<endl;
			 cin>>value;
			 s1.push(value);
			 break;
			case 2: //For pop operation
			 cout<<"Pop function  Called - Poped value: "<<s1.pop()<<endl; 
			 break;
			case 3: //for isEmpty operation
			 if(s1.isEmpty())
			  cout<<"stack is empty"<<endl;  
			 else
			  cout<<"stack is not empty"<<endl;
			case 4: //For isFull opertion
			 if(s1.isEmpty())
			  cout<<"stack is full"<<endl;
			 else
			  cout<<"stack is not full"<<endl;
			case 5://For peek opertion
			  cout<<"Enter position of item you want to peek: "<<endl;
			  cin>>position;
			  cout<<"Peek Function Called - Value at Position "<<position<<" is "<<s1.peek(position)<<endl;
			  break;
			case 6: //For count opertion
			  cout<<"Count Function Called - Number of Items in the stack are: "<<s1.count()<<endl;
			  break;
			case 7: //For change opertion
			  cout<<"change function called - "<<endl;
			  cout<<"Enter position of item you want to change : ";
			  cin>>position;
			  cout<<endl;
			  cout<<"Enter value of item you want to change : ";
			  cin>>value;
			  s1.change(position,value);
			  break;
			case 8: // for display function
			  cout<<"Display Function  Called -"<<endl;
			  s1.display();
			  break;
			case 9: //For clear screen
			  system("cls");
			  break;
			default:
			  cout<<"enter proper option  number "<<endl;
		}

	}while(option!=0);
	return 0;
}
