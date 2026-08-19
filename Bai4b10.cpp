#include<iostream>
using namespace std;
int main(){
    int n,k,dem=0;
    cout<<"Nhap so nguyen n: ";
    cin>>n;
    cout<<"Nhap chu so k: ";
    cin>>k;
    while(n!=0){
        if(n%10==k){
            dem++;
        }
        n = n/10;
    }
    cout<<dem;
}