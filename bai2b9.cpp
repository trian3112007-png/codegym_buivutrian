#include <iostream>
using namespace std;
int main(){
    int n,reverse_n=0;
    do{
    cout<<"Nhap 1 so nguyen duong n: ";
    cin>>n;
    if (n<=0){
        cout<<"n khong la so nguyen duong. Vui long nhap lai!"<<endl;
        cin>>n;
    }
    }while(n<=0);
    int a =n;
    while(n>0){
        reverse_n = reverse_n*10 + n%10;
        n = n / 10;
    } 
    if (reverse_n == a){
        cout<<a<<" la so doi xung"<<endl;
    }else{
        cout<<a<<" khong la so doi xung"<<endl;
    }
}

