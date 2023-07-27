#include<iostream>

//using namespace std;		//Predefineds namespace

namespace Marvellous 		//User defined namepsace 
{
	class Demo
	{
		int i,j;

	};

}

namespace Infosystems
{
	class Hello
	{
		int x,y;
	};
}

using namespace Infosystems;

int main()
{
	Marvellous::Demo obj;
	Hello hobj;
	std::cout<<"Inside main\n";
	return 0;

}