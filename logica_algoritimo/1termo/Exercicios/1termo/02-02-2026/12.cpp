#include <iostream>

using namespace std;

int main(){

    float peso, altura, imc, altura2;
    
    cout<<"Digite o peso, em kilos, da pessoa"<<endl;
    cin>>peso;

    cout<<"Digite a altura, em metros, da pessoa"<<endl;
    cin>>altura;

    altura2 = altura * altura;
    imc = peso / altura2;

    cout<<"O IMC ( Índice de Massa Corporal ) desta pessoa é de: "<<imc<<endl;

    




    return 0;
}