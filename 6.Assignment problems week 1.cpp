#include<iostream>
using namespace std;

//Solid square pattern

// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//         cout<<"* ";
//        } 
//        cout<<endl;
//     }
// }

//Hallow Square Pattern

// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//          if(i==0||i==n-1||j==0||j==n-1){
//            cout<<"* ";}
//            else{
//             cout<<"  ";
//            }
//  } 
//  cout<<endl;   
//     }
// }

//Solid Inverted Half Pyramid

// int main(){
//      int n;
//      cout<<"enter n : ";
//      cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }cout<<endl;
//     }
// }

//Hollow Inverted Half Pyramid

// int main(){
//      int n;
//      cout<<"enter n : ";
//      cin>>n;
//      for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//            if(i==0||j==0||j==n-i-1){
//             cout<<"* ";
//            }
//            else{
//             cout<<"  ";
//            }
//         }cout<<endl;
//     }
// }

//Solid Half ppyramid

// int main(){
//  int n;
//      cout<<"enter n : ";
//      cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"  ";
//         }
//       for(int j=0;j<2*i+1;j++){
//             cout<<"* ";
//         }  
//         cout<<endl;
//     }

// }
//Solid full ppyramid

int main(){
 int n;
     cout<<"enter n : ";
     cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
      for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }  
        cout<<endl;
    }
 for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"  ";
        }
      for(int j=0;j<2*n-2*i-1;j++){
            cout<<"* ";
        }  
        cout<<endl;
    }
}
//Hallow Half ppyramid
