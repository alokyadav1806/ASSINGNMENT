#include<iostream>
#include<numeric>
using namespace std;
int main(){
    int n1,n2,gcd;
    cout<<"Enter number1 :";
    cin>>n1;
    cout<<"Enter number2:";
    cin>>n2;
    for(int i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
        cout<<"The GCD of the number is "<<gcd<<endl; 
    

} 