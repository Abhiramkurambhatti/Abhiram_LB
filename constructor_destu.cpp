#include<iostream>

using namespace std;

class Demo{

public:

	int ino1;
	int ino2;

	Demo()
	{
		cout<<"Inside constructor\n";
		ino1 = 0;
		ino2 = 0;

	}

	~Demo()
	{
		cout<<"Inside Destructor\n";
	}
	void fun()
	{
		cout<<"fun\n";

	}
	void gun()
	{
		cout<<"gun\n";
	}
};

int main()
{
	cout<<"main:\n";

	Demo obj1;
	Demo obj2;

	obj1.fun();
	obj2.gun();
}
