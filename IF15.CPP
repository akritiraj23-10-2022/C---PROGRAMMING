/*Write the program greater value in three numbers using if else Statement*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first numbers\n";
    cin>>a;
    cout<<"Enter the second numbers\n";
    cin>>b;
    cout<<"Enter the third numbers\n";
    cin>>c;
    if(a>b&&a>c)
        cout<<"a is greater";
    else if(b>a&&b>c)
        cout<<"b is greater";
    else
        cout<<"c is greater";
    return 0;
}
