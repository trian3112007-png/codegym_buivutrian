#include <iostream>
using namespace std;
int main(){
    double diem;
    cout<<"Nhap diem: ";
    cin>>diem;
    if (diem <= 10){
        cout<<"Gioi";
    }
    else if(diem<8){
        cout<<"Kha";
    }
    else if(diem<6.5){
        cout<<"Trung binh";
    }
    else if(diem<5 && diem>=0){
        cout<<"Yeu";
    }
    else{
        cout<<"Diem khong hop le";
    }
}


