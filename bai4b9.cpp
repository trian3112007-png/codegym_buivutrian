#include <iostream>
using namespace std;
int main(){
    int secret_n = 99,n,sl=0;
    do{
        cout<<"Nhap so ban doan: ";
        cin>>n;
        if (n>secret_n){
            cout<<"So can doan nho hon"<<endl;
        }else if(n<secret_n){
            cout<<"So can doan lon hon"<<endl;
        }
        sl++;
    }while(n!=secret_n && sl <7);
    if (n == secret_n){
        cout<<"Chuc mung ban da doan dung sau "<<sl<<"luot!!"<<endl;
    }else {
        cout<<"Ban da het luot doan.\n So can doan la:"<<secret_n<<endl;
    }
}