#include<iostream>
using namespace std;

// patter5 n=4
// 1
// 22
// 333
// 4444
 
void pattern5(int n){
    int number = 1;
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i;j++){
            cout<<number<<" ";
        }
        number++;
        cout<<endl;
    }
}

//pattern6 n = 4
//1
//12
//123
//1234

void pattern6(int n){
    
    for(int i = 0;i < n;i++){
        int number = 1;
        for(int j = 0;j <= i;j++){
            cout<<number<<" ";
            number++;
        }
    
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"pattern5:"<<endl;
    pattern5(n);
    cout<<"pattern6:"<<endl;
    pattern6(n);
}
