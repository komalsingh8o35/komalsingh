# include <iostream>
using namespace std;
int c=0;
class a
{
public:
a()
{
    c++;
    cout<<"object created=(object "<<c<<")"<<endl;
}
~a()
{
    cout<<"object realeased=(object"<<c<<")"<<endl;
    c--;

}
};
int main()
{
    a c,b,d;
}