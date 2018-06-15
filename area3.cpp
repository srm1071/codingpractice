#include<iostream>
#include<math.h>
using namespace std;
float area(int,int,int);
float area(int,int);
float area(int);
int main()
{
	int a,b,c,r,k;
	cout<<"enter your choice"<<endl;
	cout<<"1:area of triangle"<<endl;
	cout<<"2:area of circle"<<endl;
	cout<<"3:area of rectangle"<<endl;
	cin>>k;
		if(k==1)
		{
			cout<<"enter sides of triangle";
			cin>>a>>b>>c;
			cout<<"area of triangle is"<<area(a,b,c)<<endl;
		}
		else if(k==2)
		{	cout<<"enter radius of circle";
			cin>>r;
			cout<<"area of circle is"<<area(r);
		}
		else if(k==3)
		{	cout<<"enter sides of rectangle";
			cin>>a>>b;
			cout<<"area of rectangle is"<<area(a,b);
		}
		else
			cout<<"invalid choice";
	
	return 0;
}
float area(int a,int b,int c)
{
	float s;
	s=(a+b+c)/2;
	return (sqrt(s*(s-a)*(s-b)*(s-c)));
}
float area(int a,int b)
{
	return a*b;
}
float area(int r)
{
	return 3.14*r*r;
} 
