#include<iostream>
using namespace std;
class stack
{
	//properties
	public:
		int *arr;
		int top;
		int size;
		
		//behaviour
		stack(int size)
		{
			this->size=size;
			arr=new int[size];
			top=-1;
		}
		
		void push(int e)
{
	if(size-top>1)
	{
		top++;
		arr[top]=e;
	}
	else
	{
		cout<<"Stack is Overflow\n";
	}
}
void pop()
{
	if(top>=0)
	{
		top--;
	}
	else
	{
		cout<<"Underflow\n";
	}
}
int peek()
{
	if(top>=0)
	{
		return arr[top];
	}
	else
		{
			cout<<"Stack is Empty\n "<<endl;
			return -1;
		}
	
}
bool isempty()
{
	if(top==-1)
	{
		cout<<"Stack is Empty\n";
	}
	else
	{
		cout<<"Stack is not empty\n";
		
	}
}

};

int main()
{
	stack st(5);
	st.push(34);
	st.push(89);
	
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	st.pop();
	if(st.isempty())
	{
		cout<<"stack is empty";
	}
	else
	{
		cout<<"Stack is not empty";
	}

	return 0;
}
