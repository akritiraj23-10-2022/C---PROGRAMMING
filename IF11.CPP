/*Write the program check alphabet is Uppercase or Lowercase*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the any alphabet\n";
    cin>>ch;
    if(ch>=65&&ch<=90)
    {
        cout<<"Uppercase";
    }
    else
    {
        cout<<"Lowrcase";
    }
    return 0;
}
