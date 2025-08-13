#include<iostream>
#include<string>
using namespace std;   
int main(){
    string name = "Variables Example"; // String variable
    int a = 10; // Integer variable
    float b = 5.5; // Floating-point variable
    char c = 'A'; // Character variable
    bool d = true; // Boolean variable
    double e = 3.14159; // Double precision floating-point variable

    cout<<"Your File name is: "<< name << endl;
    cout<<"Integer value is:"<< a <<endl;
    cout<<"Float value is:"<< b <<endl;
    cout<<"Character value is:"<< c<<endl;
    cout<<"Boolean value is:"<< d <<endl;
    cout<<"Double value is:"<< e <<endl;
    
    return 0;
}
/*
    string input:
    string name ;
    cin >> name; // Input for string variable
    getline(cin,name); // Input for string variable with spaces
    cout<<"Your name is: "<< name << endl;
*/