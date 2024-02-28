// wap to perform multiplication binary operator using friend function..
#include<iostream>
using namespace std;
class A
{
    int x,y,z;
    public:
    A()
    {}
    A(int i, int j,int k)
    {
        x=i;
        y=j;
        z=k;

    }
    friend A operator *(A,A);
    void show()
    {
        cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
    }
};
A operator *(A d,A m)

{
    A t;
    t.x=d.x+m.x;// in friend function we have to give reference object of left variable also
    t.y=d.y>m.y;
   t.z=d.z<m.z;
  return t;
}
int main()
{
    A a(2,3,4),b(5,6,8),c;
    a.show();
    b.show();
    c=a*b;
    c.show();
    return 0;

}

