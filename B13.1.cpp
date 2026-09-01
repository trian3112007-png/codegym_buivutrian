#include <iostream>
using namespace std;
#define PI 3.14159 
#include <iomanip>
float DienTichHCN(float dai,float rong){
    return 1.00 * dai * rong ;
}
float ChuViHCN(float dai, float rong){
    return 1.00*(dai+rong)*2 ;
}
float DienTichHTron(float r){
    return 1.00 * PI * r * r;
}
float ChuViHTron(float r){
    return 2.00 * PI * r;
}
int main(){
    float dai,rong,r;
    cout<<fixed<<setprecision(2);
    cout<<"Nhap chieu dai, chieu rong hcn: ";
    cin>>dai>>rong;
    cout<<"Dien tich: "<<DienTichHCN(dai,rong)<<"\nChu vi: "<<ChuViHCN(dai,rong)<<endl;
    cout<<"Nhap chu vi hinh tron: ";
    cin>>r;
    cout<<"Dien tich: "<<DienTichHTron(r)<<"\nChu vi: "<<ChuViHTron(r)<<endl;
}