#include <iostream>
using namespace std;
int main(){
    char diem;
    cout<<"Nhap diem chu: ";
    cin>>diem;
    switch (diem){
        case 'A': cout<<"4.0";break;
        case 'B': cout<<"3.0";break;
        case 'C': cout<<"2.0";break;
        case 'D': cout<<"1.0";break;
        case 'F': cout<<"0.0";break;
        default: cout<<"Diem chu khong hop le";
    }

}