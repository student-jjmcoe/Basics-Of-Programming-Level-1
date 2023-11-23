#include<iostream>
#include<cmath>
using namespace std;

//to convert decimal no, to binary no,
int decimalToBinaryMethod1(int n){
    //division method.
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit = n%2;
        binaryno = bit*pow(10,i++)+binaryno;
        n=n/2;
    }
    return binaryno;
}
int decimalToBinaryMethod2(int n){
    // bitwise method.
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit = (n & 1);
        binaryno = bit*pow(10,i++)+binaryno;
        n=n>>1;
    }
    return binaryno;
}
// to convert binary no, to decimal no.
    int binaryToDecimalMethod1(int m){
      int decimal =0;
      int i=0;
      while(m){
        int bit = m%10;
        decimal = decimal + bit*pow(2,i++);
        m/=10;
      }
      return decimal;
    }
    int binaryToDecimalMethod2(int m){
      int decimal =0;
      int i=0;
      while(m){
        int bit = (m&1);
        decimal = decimal + bit*pow(2,i++);
        m>>1;
      }
      return decimal;
    }


int main(){
    int n,m;
    cout<<"decimal no. :";
    cin>>n;
    cout<<"binary no. :";
    cin>>m;
    cout <<"binary no. :"<<decimalToBinaryMethod1(n)<<endl;
    cout <<"binary no. :"<<decimalToBinaryMethod2(n)<<endl;
    cout <<"decimal no. :"<<binaryToDecimalMethod1(m)<<endl;
    cout <<"decimal no. :"<<binaryToDecimalMethod2(m)<<endl;
}
