#include<iostream>
using namespace std;


class Hello
{
public:
	void fun();
	void gun();
};

class Demo
{
public:
	int i;
private:
	int j;
protected:
	int k;

public:
	Demo()
	{
		i=10; j=20; k=30;

	}
	friend class Hello;
};

void Hello::gun()				//object oriented function
{
	Demo obj;
	cout<<obj.i<<endl;
	cout<<obj.j<<endl;		//error
	cout<<obj.k<<endl;		//error
}

void Hello::fun()
{
	Demo obj;
	cout<<obj.i<<endl;
	cout<<obj.j<<endl;		//error
	cout<<obj.k<<endl;		//error
}
int main()
{
		Hello hobj;
		hobj.fun();
		
		return 0;
}