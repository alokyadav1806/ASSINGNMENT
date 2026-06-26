#include<iostream>
 using namespace std;
 int main(){
    int n1,n2;
    cout<<"Enter the first number";
    cin>>n1;
    cout<<"Enter the second number";
    cin>>n2;
    int max=(n1>n2)?n1:n2;
    while(true){
    if(max%n1==0 && max%n2==0)
    cout<<"LCM of "<<n1<<"and"<<n2<<"is"<<max;
    break;
    }
     max++;
 }