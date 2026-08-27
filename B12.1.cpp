#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int lst[n];
    
    cout<<"Nhap "<<n<<" diem: ";
    for (int i=0; i<n; i++){
        cin>>lst[i];
    }
    for (int i=0; i<n-1; i++){
        int minIdx=i;
        for (int j= i+1; j<n; j++){
            if (lst[j]<lst[i]){
                minIdx = j;
            }
        }
        int tam = lst[i];
        lst[i]=lst[minIdx];
        lst[minIdx]=tam;
    }
    
    cout<<"Ket qua: ";
    for (int i=0; i<n; i++){
        cout<<lst[i]<<" ";
    }
}