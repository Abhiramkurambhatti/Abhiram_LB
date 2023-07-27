#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private:					//Characteristics
		PNODE Head;
		PNODE Tail;

		public:					//Behaviours

//Declaration
		SinglyCLL();
		void InsertFirst(int no);	
		void InsertLast(int no);		
		void InsertAtPos(int no, int ipos);		
		void DeleteFirst(int no);
		void DeleteLast(int no);	
		void DeleteAtPos(int ipos);	
		void Display();	
		int Count();	
};
	//Defination
	
		SinglyCLL::SinglyCLL()
		{

			Head = NULL;
			Tail = NULL;
		}

		void SinglyCLL::InsertFirst(int no)
		{
			PNODE newn = NULL;

			newn = new NODE;
			
			newn->data = no;
			newn->next = NULL;

			if ((Head == NULL)&&(Tail == NULL))		//If LL is empty
			{
				Head = newn;
				Tail = newn;


			}
			else		//If LL constains atleast one node
			{


			}
			Tail -> next = Head;

		}

		void SinglyCLL::InsertLast(int no)
		{
			PNODE newn = NULL;

			newn = new NODE;
			
			newn->data = no;
			newn->next = NULL;

			if ((Head == NULL)&&(Tail == NULL))		//If LL is empty
			{
				Head = newn;
				Tail = newn;


			}
			else		//If LL constains atleast one node
			{


			}
			Tail -> next = Head;
			

		}

		void SinglyCLL::InsertAtPos(int no, int ipos)
		{

		}

		void SinglyCLL::DeleteFirst(int no)
		{

		}

		void SinglyCLL::DeleteLast(int no)
		{

		}

		void SinglyCLL::DeleteAtPos(int ipos)
		{

		}

		void SinglyCLL::Display()
		{
			PNODE temp = Head;

			while(Head != NULL)
			{
				cout<<"l"<<temp->data<<"i->";
				temp = temp -> next;

			}

			cout<<endl;

		}

		int SinglyCLL::Count()
		{
			return 0;
		}


int main()
{

	SinglyCLL obj;
	return 0;
}