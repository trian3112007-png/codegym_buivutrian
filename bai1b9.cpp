#include <iostream>
using namespace std;
int main(){
    int n,max = 0,dem=0;
    do{
    cout<<"Nhap 1 so nguyen duong n: ";
    cin>>n;
    if (n<=0){
        cout<<"n khong la so nguyen duong. Vui long nhap lai!"<<endl;
    }
    }while(n<=0);

    while (n>0){
        dem ++;
        if (n%10 >max){
            max = n%10;
        }
        n = n/10;
    }
    cout<<"So chu so la: "<<dem<<endl;
    cout<<"Chu so lon nhat la: "<<max<<endl;
}