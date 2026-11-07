#include<iostream>
using namespace std;
//reverse triangle n = 4
//1
//21
//321
//4321

void pattern7(int n){
    
    for(int i = 0;i < n;i++){
        for(int j = i+1;j > 0 ;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    pattern7(n);
}
