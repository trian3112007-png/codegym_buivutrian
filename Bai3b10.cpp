#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Nhap so nguyen n: ";
    cin>>n;
    for (int i =1;i<=sqrt(n);i++){
        cout<<i*i<<' ';
    }
}