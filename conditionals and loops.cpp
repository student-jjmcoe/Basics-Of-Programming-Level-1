#include<iostream>
using namespace std;

int main(){
//conditionals

    int balance;
    cout<<"balance is : ";
    cin>>balance;
    if(balance>=10){
        cout<<"maggi"<<endl;
    }
    else{
        cout<<"curcure"<<endl;
    }

//To check type of shape from no. of sides
    int side;
    cout<<"no. of sides : ";
    cin>>side;
    if(side == 3){
        cout<<"traingle";
    }
    else if(side == 4){
        cout<<"rectangle";
    }
    else if(side == 5){
        cout<<"pentagon";
    }
    else{
        cout<<"not a traingle or rectangle or pentagon ";
    }
    
//TO check if the given number is +ve or -ve or 0
       int number;
       cout<<"number is : ";
       cin>>number;
       if(number > 0){
        cout<<"positive";
       }
       else if(number < 0){
        cout<<"negative";
       }
       else{
        cout<<"zero";
       }

//to check even or odd
        int num;
        cout<<"number to be check : ";
        cin>>num;
        if(num%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }

// Loops
//single loop
     for(int i=0;i<=5;i=i+1){
        cout<<"shweta\n";
     }
     for(int i=0;i<=5;i=i+1){
        cout<<i<<'\n';
     }
     for(int i=10;i<=12;i++){
        cout<<"hello!"<<endl;
     }
     for(int i=1;i<12;i++){
        cout<<i<<'\n';
     }
     for(int i=2;i<=10;i=i+2){
        cout<<i<<'\n';
     }
     for(int i=10;i>=0;i--){
        cout<<i<<'\n';
     }
     for(int i=10;i>=0;i=i-3){
        cout<<i<<'\n';
     }
     for(int i=0;i<5;i=i+1){
        cout<<"A"<<" ";
     } 
     cout<<endl;

//Nested loop
     for(int row=0;row<5;row++){
        cout<<"Outer Loop "<<row<<endl;
        for(int col=0;col<5;col++){
            cout<<"Inner Loop "<<col<<endl;
        }
     }
     int i=0;
    for( ; ; ){
        if(i<5){
            cout<<i<<endl;
            i++;
        } 
        
        else{
            break;
        }
    } cout<<"Hii"<<endl;

// To Print Table Of 19
    for(int i=1;i<11;i++){
        cout<<(19*i)<<endl;
    }

//To Print Even Numbers from 1 to 100
    for(int i=2;i<=100;i=i+2){
        cout<<i<<endl;
    }

//pattern printing

//square pattern
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cout<<"*"<<" ";
        } cout<<endl;
    }

//rectangular pattern
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
           cout<<"*"<<" ";
        } cout<<endl;
    }
    
//Hallo rectangle
    //outer loop
    for(int i=0;i<3;i++){
        //Inner loop
        for(int j=0;j<7;j++){
            //f zeroth and last row and column , then print star
           if(i==0||i==2||j==0||j==6){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        } cout<<endl;
    }

    //outer loop 
    for(int i=0;i<8;i++){
        //Inner loop loop
        for(int j=0;j<8;j++){
            //f zeroth and last row and column , then print star
           if(i==0||i==7||j==0||j==7){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        } cout<<endl;
    }

//Half pyramid
        int n;
        cin>>n;
           //Outer loop
    for(int i=0;i<n;i++){
        //Inner loop
        for(int j=0;j<i+1;j++){
            cout<<"* ";
           }cout<<endl;
        } 

//inverted half pyramid
        int m;
        cin>>m;
           //Outer loop
    for(int i=0;i<m;i++){
        //Inner loop
        for(int j=0;j<n-i;j++){
            cout<<"* ";
           }cout<<endl;
        } 
//numeric half pyramid
        int y;
        cin>>y;
        //Outer loop
    for(int i=1;i<y;i++){
        //Inner loop
        for(int j=0;j<i+1;j++){
            cout<<i<<" ";
           }cout<<endl;
    } 

//inverted numeric half pyramid
        int x;
        cin>>x;
           //Outer loop
    for(int i=0;i<x;i++){
        //Inner loop
        for(int j=1;j<n-i;j++){
            cout<<j<<" ";
           }cout<<endl;
    } 
     return 0;

}