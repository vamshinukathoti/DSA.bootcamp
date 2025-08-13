/*
    Nested if - else example
*/
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Please Enter age :"<<endl;
    cin >> age;
    if (age <=12)
    {
        cout<<"Your a child"<<endl;
    }else if (age< 13 && age>19 )
    {
        cout<<"You are a Teenager"<<endl;
    }else if (age >20 && age < 60)
    {
        cout<<"You're an Adult now"<<endl;
    }else if (age>=60){
        cout<<"You're in Oldage"<<endl;
    }
    return 0;
    
    
}