#include <iostream>
#include <cmath>

using namespace std;

int salario(int hora, int qntHoras, int aulas, double inss){
    double bruto = aulas * (qntHoras * hora);
    double liquido = bruto - (bruto * inss);
    return liquido;
}   
int main(){
    int hr, qntHr, al, ins;

    cout<<"Digite o valor da hora aula"<<endl;
    cin>>hr;

    cout<<"Digite as horas por aula"<<endl;
    cin>>qntHr;

    cout<<"Digite quantas aulas foram no mês"<<endl;
    cin>>al;

    cout<<"Digite o valor do desconto do INSS ( Ex: 10 )"<<endl;
    cin>>ins;

    double porcentagem = ins / 100.0;

    cout<<"O salário líquido deste mês foi de "<<salario(hr, qntHr, al, porcentagem)<<"."<<endl;

}