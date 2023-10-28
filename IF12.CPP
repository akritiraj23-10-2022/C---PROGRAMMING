/*Write the program input three angle of triangle and check triangle is valid or not*/
#include<iostream>
using namespace std;
int main()
{
    float a1,a2,a3;
    cout<<"Enter the first angle\n";
    cin>>a1;
    cout<<"Enter the second angle\n";
    cin>>a2;
    cout<<"Enter the third angle\n";
    cin>>a3;
    if((a1+a2+a3)==180)
    {
        cout <<"Triangle is valid";
    }
    else
        {
            cout<<"Triangle is not valid";
        }
        return 0;
}
