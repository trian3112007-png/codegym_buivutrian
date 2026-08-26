#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap so n: ";
    cin>>n;
    int lst[n];
    cout<<"Nhap list: ";
    for (int i=0; i<n; i++){
        cin>>lst[i];
    }
    cout<<"List goc: ";
    for (int i=0; i<n; i++){
        cout<<lst[i]<<' ';
    }
    
    cout<<"List dao: ";
    for (int i=n-1; i>=0;i--){
        cout<<lst[i]<<' ';
    }
}