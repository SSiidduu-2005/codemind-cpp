#include<iostream>
using namespace std;
int reverseDigit(int n){
    int a,rev=0;
    while(n!=0){
    a=n%10;
    rev=(rev*10)+a;
    n/=10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    int rev=reverseDigit(n);
    if((n*n)==reverseDigit(rev*rev)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}