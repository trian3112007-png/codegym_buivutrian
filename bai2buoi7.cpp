#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Nhap ba so a,b,c: ";
    cin>>a>>b>>c;
    cout<<"So lon nhat la: "<<((a>=b && a>=c)?a:(b>=c?b:c));
}