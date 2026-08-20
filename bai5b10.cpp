#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,sign=1;
    double s = 0.0;
    cout<<"Nhap n: ";
    cin>>n;
    for (int i=1; i<=n;i++){
        s += sign* ( 1.0/i );
        sign = -sign;
    }
    cout<<fixed<<setprecision(4) ;
    cout<<"Tong can tim: "<<s<<endl;
}