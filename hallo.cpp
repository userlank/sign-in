#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    cin>>a>>b;
    cout<<"hallo"<<a<<b;
    for(int i=0;i<5;i++)
    {
        cout<<endl<<"+";
    }
    cout<<"total="<<a+b<<endl;
    int c=0;
    cin>>c;
    cout<<"total="<<a+b+c<<endl;
    int d=0;
    cin>>d;
    cout<<"total="<<a+b+c+d;
}