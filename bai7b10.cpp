#include<iostream>
using namespace std;
int main(){
    int n,dem=0;
    cout<<"Nhap n: ";
    cin>>n;
    while(n!=1){
        if (n%2==0){
            n = n/2;
        }else{
            n = 3*n+1;
        }
        dem ++;
    }
    cout<<"So buoc la: "<<dem;
}