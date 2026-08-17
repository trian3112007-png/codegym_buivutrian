#include <iostream>
using namespace std;
int main(){
    int n,sl=0,tong=0;
    cout<<"Nhap n:";
    cin>>n;
    for (int i = 1; i<=n; i++){
        if (i%3!=0){
            continue;
        }
        sl = sl + 1;
        tong = tong + i;
    }
    cout<<"So cac so chia het cho 3 la: "<<sl<<endl;
    cout<<"Tong cac so chia het cho 3 la: "<< tong<<endl;
    
}