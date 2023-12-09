#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=1;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Fibonacci series upto "<<n<<" terms"<<endl<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nw=a+b;
        cout<<nw<<" ";
       
        a=b;
        b=nw;
    }
}