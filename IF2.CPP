/*Write the program greater value in three number*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number\n";
    cin>>a;
    cout<<"Enter the second number\n";
    cin>>b;
    cout<<"enter the third number\n";
    cin>>c;
    if(a>b&&a>c)
        cout<<a<<"is greater";
    if(b>a&&b>c)
        cout<<b<<"is greater";
    if(c>a&&c>a)
        cout<<c<<"is greater";
    return 0;
}
