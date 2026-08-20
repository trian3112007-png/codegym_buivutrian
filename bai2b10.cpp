#include <iostream>
using namespace std;
int main(){
    float batdau,ketthuc;
    int buocnhay;
    cout<<"Nhap diem bat dau: ";
    cin>>batdau;
    cout<<"Nhap diem ket thuc: ";
    cin>>ketthuc;
    cout<<"Nhap buoc nhay: ";
    cin>>buocnhay;
    for (int i = batdau; i<=ketthuc; i+=buocnhay){
        cout<<i<<" do C"<<" = "<<i*1.8 + 32<<" do F"<<endl;
    }
}