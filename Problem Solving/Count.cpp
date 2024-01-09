#include<iostream>
using namespace std;

void count(int n){
    int a,num;
    if(n>0){ 
     a=n%10;
     num=n/10;
    }else{
        return;
    }
    switch (a){
        case 1: cout<<"One ";
                break;
        case 2: cout<<"Two ";
                break;
        case 3: cout<<"Three ";
                break;
        case 4: cout<<"Four ";
                break;
        case 5: cout<<"Five ";
                break;
        case 6: cout<<"Six ";
                break;
        case 7: cout<<"Seven ";
                break;
        case 8: cout<<"Eight ";
                break;
        case 9: cout<<"Nine ";
                break;
        case 0: cout<<"Zero ";
                break;
    }
    
    count(num);
    
}

int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 

int main(){
    int n;
    cin>>n;
    n=reverseDigits(n);
    count(n);
}