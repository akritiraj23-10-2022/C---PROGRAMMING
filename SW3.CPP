/*Write the program check alphabet is CONSONENT or vowel method 2*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the any alphabet\n";
    cin>> ch;
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"vowel";
        break;
    default:
        cout<<"Consonet";
    }
    return 0;
}
