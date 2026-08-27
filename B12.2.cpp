#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap so san pham: ";
    cin>>n;
    int lst[n];

    cout<<"Nhap gia "<<n<<" san pham: ";
    for (int i = 0; i<n; i++){
        cin>>lst[i];
    }
    for (int i = 0; i<n; i++){
        for (int j=0; j<n-1-i; j++){
            if (lst[j]>lst[j+1]){
                int tam = lst[j];
                lst[j] = lst[j+1];
                lst[j+1]=tam;
            }
        }
    }
    
    cout<<"Ket qua: ";
    for (int i=0; i<n; i++){
        cout<<lst[i]<<" ";
    }
}