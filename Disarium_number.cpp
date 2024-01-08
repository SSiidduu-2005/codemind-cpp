#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,a,rev=0,sum=0,v=1;
    cin>>n;
    int N=n;
    while(n!=0){
        a=n%10;
        rev=(rev*10)+a;
        n/=10;
    }
     while(rev!=0){
        a=rev%10;
        rev/=10;
        sum=sum+pow(a,v);
        v++;
    }
    if(sum==N){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}