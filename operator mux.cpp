#include<iostream>
using namespace std;
class complex
{
    float x;
    float y;
    public:
        complex(){};
        complex(float real,float imag)
        {
            x=real;
            y=imag;
        }
        complex operator * (complex);
        void display();
};
complex complex::operator *(complex t)
{
    complex num;
    num.x=(x*t.x)-(y*t.y);
    num.y=(y*t.x)+(x*t.y);
    return num;
}
void complex::display(void)
{
    cout<<x<<"+j"<<y<< endl;
}
int main()
{
    complex c1,c2,c3;
    c1= complex(1.2,2.3);
    c2= complex(1.2,2.4);
    c3= c1*c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
