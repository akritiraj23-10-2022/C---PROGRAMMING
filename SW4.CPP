/*Write the program  simple calculator*/
#include<iostream>
using namespace std;
int main()
{
    float x,y;
    char ch;
    cout<<"Enter the first number\n";
    cin>>x;
    cout<<"Enter the second numbers\n";
    cin>>y;
    cout<<"Enter\n+for add\n- for sub \n* for multiply\n/for div \n";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"add="<<(x+y);
        break;
    case  '-':
        cout<<"sub="<<(x-y);
        break;
    case '*':
        cout<<"multiply="<<(x*y);
        break;
    case '/':
        cout<<"div="<<(x/y);
        break;
        cout<<"Invalid input!!";
    }
    return 0;
}
