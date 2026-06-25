#include<iostream>
using namespace std;
int main(){
    int n,r,rev=0;
    cout<<"Enter number:";
    cin>>n;
     int n1=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
       if(rev==n1){
        cout<<"Number is palindrome";
       }
    else{

    cout<<"Number is not palindrome";
    }
}