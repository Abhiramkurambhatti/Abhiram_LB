#include<iostream>
namespace Marvellous		//User defined namespace
{
	class Demo
	{
		int i,j;

	}
	namespace Infosystems
	{
		class Hello
		{
			int x,y;

		};
	}
}

//Import statement
using namespace Marvellous;
using namespace Marvellous::Infosystems;

int main()
{
	//Marvellous::Demo dobj;
	//MArvellous::Infosystems::Hello hobj;

	Demo dobj;
	Hello hobj;

	return 0;
}