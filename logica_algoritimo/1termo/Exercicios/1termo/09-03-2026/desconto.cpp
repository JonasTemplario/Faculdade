#include <iostream>
#include <string>

using namespace std;

int main(){

    float preco;
    string resp = "sim";

    while(resp=="sim"){

    cout<<"Informe o preço do produto: "<<endl;
    cin>>preco;

    if (preco>100){

        cout<<"O preço com desconto é: "<<0.9*preco<<endl;

    }
    else{

        cout<<"O produto não tem desconto, então custa: "<<preco<<endl;

    }

    cout<<"Deseja inserir mais algum produto?"<<endl;
    cin>>resp;

}

    cout<<"Encerrando...";

    return 0;
}