#include<iostream>
#include<string.h>
using namespace std;
class person
{
	int person_id;
	char *name;
	int age;

	public:
	person()
	{
		*name="**";
		person_id=0;
		age=0;
	}
	person(int i,char *j,int k)
	{
		person_id=i;
		name=j;
		age=k;
	}
	person(person &A)
	{
		person_id=A.person_id;
		name=A.name;
		age=A.age;
	}
	void display();
	
};
void person::display()
{
	cout<<person_id<<name<<age;
}
main()
{
	int p,age;
	char *name;
	person B,C;
	B.display();
	cout<<"enter person_id";
	cin>>p;
	cout<<"enter name";
	cin>>name;
	cout<<"enter age";
	cin>>age;
	C.display();
	person D(B);
	D.display();
}
