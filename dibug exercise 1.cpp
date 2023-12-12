// /* 1] Take input a character,print 1 if it is a capital alphabet, 
//   print 0 if it is a lowercase alphabet , else print -1 */
#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}
//2]/*
// Pattern
// 1
// 23
// 345
// 4567
// */
#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    int i=1;
    while(i<n){
        int j = i,count = 1;
        while(count<=i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
//3] /*
// Pattern
// N = 4
//    *
//   ***
//  *****
// *******
// */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j = i,count = 2*n-1,gaps=(n-i-1),k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<=ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
// 4]/*
// Pattern
// N = 4
// 1
// 22
// 333
// 4444
// */
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<i+1;j++){
	        cout<<i;
        }
    cout<<endl;
    }
}
// 5]/*
// Pattern
// N = 4
// 1
// 21
// 321
// 4321
// */
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
       int p=i;
        for(j=1;j<i+1;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}
// 6] /*
// Pattern
// N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
// */
#include<iostream>
using namespace std;

int main() {
    int i,j,n;;
    cin>>n;
    for(i=1;i<=n;i++){
        char p='A'+n-i;
        for(j=1;j<=i;j++){
            cout<<p;
            p++;  
        }
        cout<<endl;
    }
}
// 7]/*
// Pattern
// N = 4
//    1
//   232
//  34543
// 4567654
// */
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no-1;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps , z = (ch+1)/2;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z = z - 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
// 8] /*
// Pattern
// N = 5
//   *
//  ***
// *****
//  ***
//   *
// */
#include<iostream>
using namespace std;
void printPatt(int n){
    int i=1;
    while(i<=(n)){
        int gaps = n-2*i+1,k=1;
        if(i>(n+1)/2){
            int no = (n+1)/2;
            gaps = 2*(i%no);
        }
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps;
        while(ch>=1){
            cout<<"*";
            ch = ch - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
        }}
    int main(){
        int n=5;
         printPatt( n);

    }
