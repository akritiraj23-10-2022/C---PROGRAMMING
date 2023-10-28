/*Write the program logic program*/
#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char
    u[200]="easy@gmail.com",p[200]="12345";
    char u1[200],p1[200];
    cout<<"Enter username\n";
    cin>>u1;
    cout<<"Enter password\n";
    cin>>p1;
    if(strcmp(u,u1)==0&&strcmp(p,p1)==0)
    {
        cout<<"Login Successful";
    }
    else
    {
        cout<<"Wrong username or password";
    }
    return 0;
}
