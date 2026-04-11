#include <iostream>

using namespace std;

int main(){

    int num1, antecessor, sucessor;

    cout<<"Digite um número"<<endl;
    cin>>num1;

    sucessor = num1 + 1;
    antecessor = num1 -1;

    cout<<"O sucessor do seu número é: "<<sucessor<<" e o antecessor é: "<<antecessor<<endl;

    return 0;
}