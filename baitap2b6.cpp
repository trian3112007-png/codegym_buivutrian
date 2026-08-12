#include <iostream>
using namespace std;
int main(){
    float diem;
    string khuvuc;
    cout<<"Nhap diem: ";
    cin>> diem;
    if (diem >= 20){
        cout<<"Nhap khu vuc: ";
        cin>>khuvuc;
        if (khuvuc == "KV1"){
            diem = diem + 0.75;
        }else
        {
            if (khuvuc == "KV2"){
                diem += 0.5;
            }
        }
    }
    cout<<"Diem cuoi cung la: "<<diem;
    return 0;
}