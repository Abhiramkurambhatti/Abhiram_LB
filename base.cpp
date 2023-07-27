#include<iostream>
using namespace std;
/*
class Base
{
public:
	int x,y;
	Base(int a, int b)
	{
		x=a;
		y=b;
	}
};

class Derived: public Base
{
public:
	int a,b;

	Derived() : Base(10,20)
	{
		cout<<"Derived constructor\n";
	}

};

int  main()
{
	Base bobj(10,20);
	return 0;
}	*/

class Base
{
public:
	int x,y;
	Base(int a, int b)
	{
		x=a;
		y=b;
	}
};

class Derived: public Base
{
public:
	int a,b;

	Derived(int i, int j, int k, int l) : Base(k,l)		//Base member intialization 
	{
		cout<<"Derived constructor\n";
		a=i;
		b=j;
	}

};

int  main()
{
	Derived dobj(10,20,30,40);
	cout<<"dobj.x"<<"\n";
	cout<<"dobj.y"<<"\n";
	cout<<"dobj.a"<<"\n";
	cout<<"dobj.b"<<"\n";
	return 0;
}