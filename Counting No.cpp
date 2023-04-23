#include<iostream>
using namespace std;

void printcounting(int n){
int i=1;
for(i=1; i<=n; i++){
cout<< i <<endl;
}
}
int main(){
    int n;
    cout<<"Enter Upto No. "<<endl;
    cin>>n;
    printcounting(n);
return 0;
}
