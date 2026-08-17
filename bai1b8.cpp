#include <iostream>
using namespace std;
int main(){
    short n;
    cout<<"Nhap n: ";
    cin>>n;
     int giaithua = 1;
    if (n>12 || n<0){
        cout<<"n khong hop le";
    }
    else{
        for (int i=1;i<=n;i++){
            giaithua = giaithua * i;
        }
        cout<<giaithua;
    }
   
}