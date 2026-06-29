#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,n1,count=0,r,sum=0;
    cout<<"Enter the number:";
    cin>>n;
        n1=n;
        while(n>0){
            n=n/10;
            count=count+1;
        }
        n=n1;
        while(n>0){
            r=n%10;
            sum +=round(pow(r,count));
            n=n/10;
        }
        if(sum==n1){
        cout<<"Armstrong number";
        }
        else
        cout<<"Not a armstrong number"; 
    }
         