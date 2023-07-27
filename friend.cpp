#include<iostream>
using namespace std;

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
	friend void fun();

};
void fun()				//naked function
{
	Demo obj;
	cout<<obj.i<<endl;
	cout<<obj.j<<endl;		//error
	cout<<obj.k<<endl;		//error

}

int main()
{
		fun();
		return 0;
}