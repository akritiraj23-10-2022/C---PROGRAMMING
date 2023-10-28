/*Write the program alphabet is CONSONENT or vowel method 1*/
#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter any alphabet\n";
cin>>ch;
switch(ch)
{
case 'a':
    cout<<"VOWEL";
    break;
case 'e':
    cout<<"VOWEL";
    break;
case 'i':
    cout<<"VOWEL";
    break;
case 'o':
    cout<<"VOWEL";
    break;
case 'u':
    default:
    cout<<"Consonent";
}
return 0;
}
