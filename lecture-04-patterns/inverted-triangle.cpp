#include<iostream>
using namespace std;
//Inverted triangle pattern n = 4
//1111
// 222
//  33
//   4

void pattern9(int n){
    for(int i = 0;i < n;i++){
        // i spaces first
        for(int j = 0;j < i;j++){
            cout<<" ";
        }
        // then the row number, (n - i) times
        for(int j = 0;j < n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    pattern9(n);
}
