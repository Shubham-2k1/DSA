#include<iostream>
using namespace std;

bool is_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int check(int n){
    
    for(int i=3;i<=n;i+2){
        if(n%i==0){
            if(is_prime(i)){
                return i;
            }
        }
        return n;
    }
}


int main(){
    int n;
    cin>>n;
    int min_prime=1;
    if(n==1){
        cout<<1;
    }
    else if(n==2){
        cout<<2;
    }
    else{
        for(int i=1;i<=n;i++){
            if(i==1){
                cout<<1<<" ";
            }else if(i%2==0){
                cout<<2<<" ";
            }else{     
             min_prime = check(i);
             cout<<min_prime<<" ";
            }
        }   
    }
    return 0;
}