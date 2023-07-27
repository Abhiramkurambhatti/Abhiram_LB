#include<iostream>
using namespace std;

int main()
{
	int i = 10, j =10;
	int x,y;

	x = i++;				//post increment
	y = ++j;				//pre  increment

	cout<<x<<"\n";			//10
	cout<<y<<"\n";			//11

	cout<<i<<"\n";			//9
	cout<<j<<"\n";			//9
}