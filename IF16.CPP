/*Write the given character is alphabet or digit or special symbol*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the any character\n";
    cin>>ch;
    if(ch>=65&&ch<=90||ch>=97&&ch<=122)
        cout<<"It is Alphabet";
    else if (ch>=48&&ch<=57)
        cout<<"It is digit";
    else
        cout<<"It is special symbol";
    return 0;
}
