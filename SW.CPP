/*Write the program input any number and print day of weeks*/
#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter the any numbers\n";
    cin>>no;
    switch(no)
    {
        case 1:
        cout<<"MONDAY";
        break;
        case 2:
        cout<<"TUESDAY";
        break;
        case 3:
        cout<<"WEDNESDAY";
        break;
        case 4:
        cout<<"THRUSDAY";
        break;
        case 5:
        cout<<"FRIDAY";
        break;
        case 6:
        cout<<"SATURDAY";
        break;
        case 7:
        cout<<"SUNDAY";
        break;
        default:
            cout<<"Invalid input";
    }
    return 0;
}
