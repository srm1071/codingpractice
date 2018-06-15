//temperature conversion
#include<iostream>
using namespace std;
class temperature
{
	float celcius,fahrenheit;
	public:
		void getdata()
		{
			cout<<"enter temperature in fahrenheit";
			cin>>fahrenheit;
		}
		void convert()
		{
			celcius=(fahrenheit-32)*5/9;
		}
		void display()
		{
			cout<<"temperature in fahrenheit is="<<fahrenheit;
			cout<<"\ntemperature in celcius is ="<<celcius;
		}
};
main()
{
	temperature s;
	s.getdata();
	s.convert();
	s.display();
}

