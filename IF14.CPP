/*Write the program show result according to percent using if else*/
#include<iostream>
using namespace std;
int main()
{
    float p;
    cout<<"Enter the percent\n";
    cin>>p;
    if(p>=60)
        cout<<"first division";
    else if(p>=45)
        cout<<"Second division";
    else if(p>=33)
        cout<<"Third division";
    else
        cout<<"Fail";
    return 0;
}
