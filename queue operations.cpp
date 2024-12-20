#include<iostream>
using namespace std;

#define  n 20
class queue{
	int* arr;
	int front;
	int back;
	
	public:
		//Constructor
		queue()
		{
			arr=new int[n];
			front=-1;
			back=-1;
		}
		
		//push function
		void push(int x)
		{
			if(back==n-1)
			{
				cout<<"Queue is overflow: "<<endl;
				return;
			}
			back++;
			arr[back]=x;
			
			if(front==-1)
			{
				front++;
			}
		}
		
		//pop function
		void pop()
		{
			if(front==-1 || front>back)
			{
				cout<<"Queue is empty: ";
				return;
			}
			front++;	
		}
		
		//peek function
		int peek()
		{
			if(front==-1 || front>back)
			{
				cout<<"Queue is empty: ";
				return -1;
			}
			return arr[front];		
		}
		
		bool empty()
		{
			if(front==-1 || front>back)
			{
				return true;	
			}
			return false;
		}
};

int main()
{
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<q.peek()<<endl;
	q.pop();
	}
