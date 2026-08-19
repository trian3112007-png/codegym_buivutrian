#include <iostream>
using namespace std;
int main(){
    int a,b;
    do{
    cout<<"Nhap hai so a,b :";
    cin>>a>>b;
    if (a<=0 || b<=0 ){
        cout<<"Co so khong la so nguyen duong. Vui long nhap lai!"<<endl;
    }
    }while(a<=0 || b<=0);
    if (b > a){
        int x = a;
        a = b;
        b = x;
    }
    while (b!=0){
        int y = a % b;
        a = b;
        b = y;
    }
    cout<<"Uoc chung lon nhat cua a va b la: "<<a<<endl;
}