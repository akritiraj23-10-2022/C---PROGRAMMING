/*Write the program show result according to percent*/
#include<iostream>
using namespace std;
int main()
{
float p;
cout<<"Enter your percent\n";
cin>>p;
if(p<=100&&p>=60)
    cout<<"First division";
if(p<=60&&p>=45)
    cout<<"Second division";
if(p<=45&&p>=33)
    cout<<"Third division";
if(p>33)
    //cout<<"Fail";
return 0;
}
