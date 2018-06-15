#include<iostream>
using namespace std;
class sample
{
	int m,n;
	public:
		void set_value(int a,int b)
		{
			m=a;
			n=b;
		}
		void calculate_sum();
		void display()
		{
			cout<<m<<n;
		}
};
void sample::calculate_sum()
{
	int s;
	s=m+n;
	cout<<endl<<"the sum is ="<<s;
}
main()
{
	sample x;
	x.set_value(10,20);
	x.calculate_sum();
	x.display();
} 
