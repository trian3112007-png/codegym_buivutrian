#include <iostream>
using namespace std;
int main(){
    long long cost,sum=0,highest=0;
    short sl;
    char tt;
    do {
        cout<<"Nhap gia san pham: "; 
        cin>>cost;
        sum += cost;
        if (cost>highest){
            highest =cost; 
        }
        sl ++;
        cout<<"Con mua nua khong?(c/k)"<<endl;
        cin>>tt;
    }while (tt == 'c');
    if (tt == 'k'){
        cout<<"Ban da mua "<<sl<<" mon."<<"\nTong so tien la "<<sum<<" dong."<<"\nMon dat nhat co gia "<<highest<<" dong."<<endl;
    }else{
        cout<<"Ban da mua "<<sl<<" mon."<<"\nTong so tien la "<<sum<<" dong."<<"\nMon dat nhat co gia "<<highest<<" dong."<<"\nChuong trinh dung vui long chi nhap c hoac k."<<endl;
    }
    return 0;
}
 