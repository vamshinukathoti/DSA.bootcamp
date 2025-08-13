/*
    Author: Vamshi Nukathoti
    Date:12-10-2025
    Description: This program demonstrates basic arithmetic operations in C++.
*/
#include <iostream>
using namespace std;
int main(){
    int num1,num2 ;
    cout<<"Enter values num 1 and num 2 :"<<endl;
    cin >> num1 >> num2; // User input of num 1 and 2
    cout<<"Sum of  num1 and num2 :"<<num1 + num2<<endl; // addition
    cout<<"Difference  of num1 and num2 :"<<num1 - num2<<endl; // subtraction
    cout<<"Produt of num1 and num2 :"<<num1 * num2<<endl; // multiplication
    cout<<"Quotient of num1 and num2 :"<<num1 / num2<<endl; // integer division
    cout<<"Remainder of num1 and num2 :"<< num1 % num2 <<endl; // modulus give remaing value of divison
    return 0;

}