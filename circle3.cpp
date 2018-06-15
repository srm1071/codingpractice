#include<iostream>
using namespace std;
int radius=0;
class circle
{
    float radius;
    public:
        circle()
        {
            radius++;
            cout<<"inside circle"<<endl;
        }
        ~circle()
        {
            cout<<"exit from circle"<<endl;
            radius--;
        }
};
int main()
{
    circle c1;
    cout<<"destructing circle";
    return 0;
}
