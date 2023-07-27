#include<iostream>
using namespace std;

class Demo
{
public:
	int i,j;

	Demo(int x = 10, int y = 20)
	{
		i = x;
		j = y;
	}

	//friend function declaration 

	//unary + operator 
	friend demo & operator + (Demo &a);
	friend demo &

}

Demo & operator +(Demo &a)
{
	cout<<"Inside unary + operator\n";
	return a;

}

Demo operator -(Demo &a)
{
	cout<<"Inside unary - operator\n";
	return Demo(-a.i, -a.j);
}

Demo* operator &(Demo &a)
{
	cout<<"Inside unary & operator\n";
	return a.this();
}

Demo & operator ++(Demo &a)
{
	cout<<"Inside pre-increment operator";
	a.i++;
	a.j++;
	return a;
}

