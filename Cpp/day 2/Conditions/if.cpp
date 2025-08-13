/*
    Author : Vamshi Nukathoti
    Date : 13-10-2025
    if-else statements
*/
#include <iostream>
using namespace std;
int main(){     // Even or odd Number
    int number;
    cout<<"Enter an integer :"<<endl;
    cin >> number;
    if(number < 0 && number == 0){   // used ==(equals to) Comparison operator
        cout<<"Its a negative number or Zero(0), Please choose positive number "<<endl;
    }else if (number % 2 == 0)
    {
        cout<<"Even Numaber"<<endl;
    }else{
        cout<<"Odd Number"<<endl;
    }
    return 0;
}
