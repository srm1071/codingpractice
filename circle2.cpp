#include<iostream>
using namespace std;
class circle
{
    float rad;
    float x;
    float y;
    public:
        circle(){rad=x=y=0;};
        circle(float a,float b,float c)
        {
            rad=a;x=b;y=c;
        }
        circle(circle & T)
        {
            rad=T.rad;
            x=T.x;
            y=T.y;
        }
        circle operator =(circle c);
        void show_data();
};
circle circle::operator =(circle c)
{
    circle A;
    c.rad=A.rad;
    c.x=A.x;
    c.y=A.y;
}
void circle::show_data()
{
    cout<<rad<<endl<<x<<endl<<y;
}
int main()
{
    circle c2;
    circle c1(6.3,5.0,4.6);
    c1.show_data();
    circle c3(c1);
    c3.show_data();
    c1=c2;
    c2.show_data();
    return 0;
}
