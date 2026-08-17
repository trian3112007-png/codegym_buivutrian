#include <iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"Nhap so n: ";
    cin>>n;
    if (n>=2){
        for (int i = 2; i<n; i++){
            if (n % i ==0){
                cout<<"uoc so nho nhat lon hon 1 cua n la: "<<i;
                break;
            }
            a = a + 1; 
        }
        if (a == n - 2){
            cout<<n<<" la so nguyen to";
        }
    }else
    {
        cout<<"So nhap khong hop le";
    }
}