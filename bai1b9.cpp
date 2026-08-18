#include <iostream>
using namespace std;
int main(){
    int n,max = 0,dem=0;
    cout<<"Nhap so nguyen n: ";
    cin>>n;
    while (n>0){
        dem ++;
        n = n / 10;
        if (n%10 >max){
            max = n%10;
        }
    }
    cout<<"So chu so la: "<<dem<<endl;
    cout<<"Chu so lon nhat la: "<<max<<endl;
}