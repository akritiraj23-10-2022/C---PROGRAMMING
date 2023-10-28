/*Write the simple  ATM program Using to switch case*/
#include<iostream>
using namespace std;
int main()
{
    float amt,creditamt,debitamt;
    char ch;
    cout<<"Enter the initial amount\n";
    cin>>amt;
    cout<<"Enter\nc for credit\nd for debit\nb for balance\n";
    cin>>ch;
    switch(ch)
    {
    case 'c':
        cout<<"Enter credit amount\n";
        cin>>creditamt;
        amt=amt+creditamt;
        cout<<"New Amount="<<amt;
        break;
        case 'd':
        cout<<"Enter the debit amount\n";
        cin>>debitamt;
        if(amt>=debitamt)
        {
            amt=amt-debitamt;
            cout<<"New Amount="<<amt;
        }
        else
            cout<<"Insufficient amount";
        break;
        case 'b':
            cout<<"Amount in your account="<<amt;
            break;N
        default:
            cout<<"Invalid input!!";
    }
    return 0;
}
