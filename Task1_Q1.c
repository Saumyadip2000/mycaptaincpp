#include <iostream>
using namespace std;
int main()
{
    int ch,in,f,d;
    ch=sizeof(char);
    in=sizeof(int);
    f=sizeof(float);
    d=sizeof(double);
    cout<<"Size of char:"<<ch<<" bytes"
    <<"\nSize of int:"<<in<<" bytes"
    <<"\nSize of float:"<<f<<" bytes"
    <<"\nSize of double:"<<d<<" bytes";
    return 0;
}
