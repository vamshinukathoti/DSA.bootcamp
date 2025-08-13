#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age to check :"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<"You're not eligible for voting"<<endl;
    }else{
        cout<<"You're eligble to vote"<<endl;
    }

    
}