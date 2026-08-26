#include <iostream>
using namespace std;
int main(){
    int n, x, dem=0, vt=0;
    cout<<"Nhap n: ";
    cin>>n;
    int lst[n];
    cout<<"Nhap list: "<<endl;
    for (int i=0;i<n;i++){
        cin>>lst[i];
    }
    cout<<"Nhap so can tim: ";
    cin>>x;
    for (int i=0;i<n;i++){
        if (lst[i] == x){
            dem ++;
            if(vt==0){
                vt = i + 1;
            }
        }
    }
    cout<<"So "<<x<<" lan dau tien xuat hien tai vi tri thu "<<vt<<" trong danh sach"<<endl;
    cout<<"Tong so lan xuat hien cua so "<<x<<" trong danh sach la: "<<dem<<endl;
}