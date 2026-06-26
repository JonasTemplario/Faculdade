#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    float real, euro, dolar;
    string moeda;

    cout<<"Digite o valor em reais que deseja converter"<<endl;
    cin>>real;

    euro=real / 6.10;
    dolar=real / 5.18;

    cout<<"Digite para qual moeda deseja converter"<<endl;cout<<"Obs: Digite em letra minúscula e sem ascento"<<endl;
    cin>>moeda;

    while(true) {

    if (moeda.find("euro")!= string::npos){

        cout<<"O valor de Real para Euro é de: "<<euro<<endl;
        break;

    } else if (moeda.find("dolar")!= string::npos) {

        cout<<"O valor de Real para Dolar é de: "<<dolar<<endl;
        break;

    } else {

        cout<<"TENTE NOVAMENTE. Você digitou a palavra incorretamente, preste atenção nas regras de formatação."<<endl;
        cin>>moeda;
    }   
    }
        return 0;
    }
