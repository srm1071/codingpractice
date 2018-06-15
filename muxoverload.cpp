#include<iostream>
using namespace std;
class complex
{
   private :
           double real, imag;
   public :
          complex()
          {
              real=0.0;
              imag=0.0;
          }
          complex(double r, double i)
          {
              real=r;
              imag=i;
          }
          complex operator * (complex c);
          void display();
};
complex complex::operator *(complex c)
{
   complex temp;
   temp.real=(real*c.real)-(imag*c.imag);
   temp.imag=(real*c.imag)+(imag*c.real);
   return(temp);
}
void complex::display()
{
  cout<<real<<"+j"<<imag<<endl;
}
int main()
{
   complex a(2.5,3.5);
   complex b(1.1,2.2);
   complex c;
   c=a*b;
   cout<<"c=";
   c.display();
}
