#include<iostream>
using namespace std;

//pattern8 n = 4
//floyds triangle
//1
//23
//456
//78910

void pattern8(int n){
    int number = 1;
    for(int i = 0;i < n;i++){
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
    pattern8(n);
}
