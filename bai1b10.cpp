#include <iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cout<<"Nhap n: ";
    cin>>n;
    for (int i = 2; i<=n; i += 2){
        sum += i;
    }
    cout<<sum;
}