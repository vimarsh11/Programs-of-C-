#include<iostream>
using namespace std;

bool isEven(int a){
if(a&1){
        return 0;
        }
        else{
            return 1;
        }
}


int main(){
int num;
cout<<"Enter the Number"<<endl;
cin>>num;
if(isEven(num)){
    cout<<"Number is Even"<<endl;
}
else{
    cout<<"Number is Odd"<<endl;
}
return 0;
}

