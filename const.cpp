#include<iostream>
using namespace std;

class Demo
{

public:

	int i;
	const int j;			//constant characteristics

	Demo() : i(0),j(0) 			// intialize the keyword 
	{
		cout<<"Default\n";

	}

	Demo(int x,int y) : j(y)
	{
		cout<<"parametrised\n";
		i=x;
	}
};
int main()
{
	Demo obj;
	//obj.j++;			//error
	Demo obj2(11,21);
	//obj2.j++;			//error
	return 0;
}