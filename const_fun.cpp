#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		int j;
		Demo()
		{
			i=0; j= 0;

		}
		Demo(int x, int y)
		{
			i = x; j = y;
		}
		void fun(int a)		//void fun(Demo * const this)
		{
			i++;
			j++;
		}
		void gun(int a,const int b)	const //void gun(const Demo * const this) 
		{
			int no=10;
			const int x = 20;
			a++;
			//b++;
			//x++;
			no++;
			// 	i++; j++; //error
		}

};

int main()
{
	const Demo obj(10,20);
	//obj.fun(11);		//fun(&obj,11);		//error
	obj.gun(11,21);		//gun(&obj,11);

	return 0 ;
}
