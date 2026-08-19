#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,check=1;
    cout<<"Nhap so n: ";
    cin>>n;
    for (int i=2; i<=sqrt(n);i++){
        if (n%i==0){
            {if(n/i==i){
                check = check +i;
            }else{
                check = check + i + n/i;
            }

            }
        }
    }
    if (check == n){
        cout<<n<<" la so hoan hao";
    }else{
        cout<<n<<" khong la so hoan hao";
    }
}