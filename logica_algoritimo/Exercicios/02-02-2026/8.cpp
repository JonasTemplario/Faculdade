#include <iostream>

using namespace std;

int main(){

    float salario1, porcentagem, aumento1, aumento2, salario2;

    cout<<"Digite o valor do salario inicial"<<endl;
    cin>>salario1;
    cout<<"Agora, digite o percentual de aumento de salário. Ex : 20"<<endl;
    cin>>porcentagem;

    aumento1 = porcentagem * 0.01;
    aumento2 = aumento1 * salario1;
    salario2 = aumento2 + salario1;

    cout<<"O seu aumento de salário é de: "<<aumento2<<" e o seu salário, depois desse aumento, é de: "<<salario2;

    




    return 0;
}