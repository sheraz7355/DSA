
#include<iostream>
using namespace std;


void pattern1(int n){
    for(int i = 0;i < n; i++){                    //Patterns when n =  4
//    1234
//    1234
//    1234
//    1234
        for(int j = 1;j <= n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
// Pattern
//  ABCD
//  ABCD
//  ABCD
//  ABCD

void pattern2(int n){
    for(int i = 0;i < n;i++){
        char start = 'A';
        for(int j = 0;j < n;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
    
}

//  square pattern n=3
//  123
//  456
//  789

void pattern3(int n){

    int number = 1;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
}

// Triangle Pattern n=3
//   *
//   * *
//   * * *

void pattern4(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"pattern1:"<<endl;
    pattern1(n);
    cout<<"pattern2:"<<endl;
    pattern2(n);
    cout<<"pattern3:"<<endl;
    pattern3(n);
    cout<<"pattern4:"<<endl;
    pattern4(n);
}
