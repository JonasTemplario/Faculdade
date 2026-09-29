#include <iostream>
#include <cmath>

using namespace std;

float carro(float custoFabr){
    float impostoFabr = custoFabr + ( custoFabr * 0.45 );
    float custoConsu = impostoFabr + ( impostoFabr * 0.28 );
    return custoConsu;

}

int main(){
    
    float fabrica;

    cout<<"Informe o custo de fábrica do carro."<<endl;
    cin>>fabrica;

    cout<<"O valor do carro para o consumidor é de R$"<<carro(fabrica)<<" ."<<endl;
}