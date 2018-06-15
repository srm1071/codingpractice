#include<iostream>

using namespace std;

class index
{
     private :
            int data;
     public :
           index()
           {
               data=0;
           }
           index(int i)
           {
               data=i;
           }
           index operator++()
           {
               return index(++data);
           }
           index operator++(int)
           {
               return index(data++);
           }
           void show_data()
           {
               cout<<data;
           }
};

int main()
{
     index c, d, e, f;
     e=++c;
     cout<<endl<<"c = ";
     c.show_data();
     cout<<endl<<"e = ";
     e.show_data();
     f=d++;
     cout<<endl<<"d = ";
     d.show_data();
     cout<<endl<<"f = ";
     f.show_data();
     return (0);
}
