#include<iostream>
using namespace std;
int main(){
    int n;
    int r,product=1;
    cout<<"Enter n:";
    cin>>n;
    while(n>0){
        r=n%10;
        product=product*r;
        n=n/10;
    }
     cout<<product;
}