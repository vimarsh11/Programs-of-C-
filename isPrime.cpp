#include<iostream>
using namespace std;

bool isprime(int n){

for(int i=2; i<n; i++){
    if(n%i==0){
        return 0;
    }
    else
        return 1;
}
}
int main(){
int n;
cout<<"Enter the Number"<<endl;
cin>>n;
if(isprime(n)){
    cout<<"prime No."<<endl;
}
else{
    cout<<"Not prime No."<<endl;
}
return 0;
}
