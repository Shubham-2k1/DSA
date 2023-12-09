#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check"<<endl;
    cin>>n;
    bool flag=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"The number is prime"<<endl;
    }else{
        cout<<"The number isn't prime";
    }
}