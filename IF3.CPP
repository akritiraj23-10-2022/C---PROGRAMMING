/*Write the program check given number is positive or negative or zero */
#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter any number\n";
    cin>>no;
    if(no>0)
        cout<<"no is positive\n";
    if(no<0)
        cout<<"no is negitive\n";
    if(no==0)
        cout<<"no is zero";
    return 0;
}
