#include<iostream>
using namespace std;
// print Hello World
int main(){
    cout<<"Hello World";
    // for next line
    cout<<endl;
    cout<<"Hello everyone"<<endl;
    cout<<"how are you"<<endl<<"i am good"<<'\n';
    cout<<"bye"<<endl;

    int num = 50;
    cout<< num << endl;
     //int -> 4byte
    cout<< sizeof(num)<< endl;

    char ch = 'k';
    cout<< ch << endl;
    //char -> 1byte
    cout<< sizeof(ch)<< endl;

    float pi=3.14;
    cout<< pi << endl;
    //float -> 4byte
    cout<< sizeof(pi)<< endl;
    
    long number=23;
    cout<< number << endl;
    //long -> 8byte(32 bit cpu main 4 byte)
    cout<< sizeof(number)<< endl;

    //garbage value as not initialised
    int value;
    cout<<value<<endl;

    int x=5;
    int y=10;

    //arithmetic operations
    cout<< x+y <<endl;
    cout<< x-y <<endl;
    cout<< x*y <<endl;
    cout<< y/x <<endl;
    cout<< x/y <<endl;
    cout<< y%x <<endl;

    //Relational operations
    cout<<(x>y)<<endl;
    cout<<(y>x)<<endl;
    cout<<(x>=y)<<endl;
    cout<<(x<=y)<<endl;

    //Assignment operations
    cout<<(x==5)<<endl;
    cout<<(x==1)<<endl;
        // not equal to operator
    cout<<(x!=5)<<endl;
    cout<<(x!=1)<<endl;

    //logical operations
    int age=20;
    int car=12;
       // logical and operator = &&
    if(age >= 18 && car>=1){
        cout<<"license will be aproved";
    }
    else{
        cout<<"license will not be aproved";
    }
    cout<<endl;
      //it converts 0 to 1 and any number to 0
    cout << !age <<endl;

    // taking input
    int mark;
    cout<<"enter the marks here :";
    cin>>mark;
    cout<<"marks are : "<<mark<<endl;
       //for character
     char given;
     cin>> given;
     cout<<"string to be given as output : "<<given;
    return 0;

}
