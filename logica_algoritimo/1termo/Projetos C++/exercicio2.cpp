#include <iostream>

using namespace std;

int main(){
    int n1, n2, soma, multiplicacao;   //Aqui se coloca a variável

    cout<<"Insira o primeiro número "<<endl;
    cin>>n1;
    cout<<"Insira o segundo número "<<endl;
    cin>>n2;

    soma=n1 + n2;
    multiplicacao=n1 * n2;

    cout<<"A soma dos dois números é "<<soma<<endl;
    cout<<"Já a multiplicação dos mesmos, é "<<multiplicacao<<endl;    

    return 0;
}