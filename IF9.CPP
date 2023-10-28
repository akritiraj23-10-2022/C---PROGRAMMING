/*Write the program Consonent or vowel program*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the any alphabet\n";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonent";
    }
    return 0;
}
