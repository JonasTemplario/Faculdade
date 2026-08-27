#include <iostream>
using namespace std;

void primo(int num){
    int div=0;

    for(int i = 1; i <= num; i++){
        if (num%i==0){
            div++;
        }
    }
    if (div == 2){
        cout<<"É primo."<<endl;
    }
    else {
        cout<<"Não é primo."<<endl;
    }
}
int main(){ 
    int num;
    cout<<"Digite um número para verificar se é primo."<<endl;
    cin>>num;

    primo(num);
    
    return 0;
}