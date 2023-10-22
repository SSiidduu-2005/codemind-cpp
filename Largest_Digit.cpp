#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r,l=0;
    cin>>n;
    while(n>0){
        r=n%10;
        if(l<r){
            l=r;
        }
        n/=10;
    }
    cout<<l;
}