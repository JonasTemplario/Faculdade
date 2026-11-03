#include <iostream>

using namespace std;

int main(){


struct pessoa{
    char nome[50];
    int idade;
};

    pessoa pes[3];
    int i;

    for(i = 0; i < 3; i++){
        cout<<"Informe seu nome: "<<endl;
        gets(pes[i].nome);
        fflush(stdin);

        cout<<"Informe sua idade: "<<endl;;
        cin>>pes[i].idade;
        fflush(stdin);
    }

    for(i = 0; i < 3; i++){
        cout<<"A pessoa"<<pes[i].nome;
        cout<<" tem "<<pes[i].idade;
        cout<<" anos de idade"<<endl;
    }


}