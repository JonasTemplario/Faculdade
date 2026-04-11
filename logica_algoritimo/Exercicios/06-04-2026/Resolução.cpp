using namespace std;
#include <iostream>
#include <string>

int main(){
    int total, pagamento;

    cout<<"Digite o valor total da compra: "<<endl;
    cin>>total;
    cout<<"Digite o meio de pagamento: "<<endl;
    cout<<"1. Dinheiro"<<endl;
    cout<<"2. PIX"<<endl;
    cout<<"3. Cartão de débito"<<endl;
    cout<<"4. Cartão de crédito"<<endl;
    cin>>pagamento;
    
    switch (pagamento) {
        case 1:
        if (total <= 100){
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.03<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.97<<endl;
            }
        else if (total >100 && total <= 300) {
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.08<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.92<<endl;
        }
        else if (total > 300) {
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.13<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.87<<endl;
        }
            break;
        case 2:
        if (total <= 100){
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.03<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.97<<endl;
            }
        else if (total >100 && total <= 300) {
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.08<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.92<<endl;
        }
        else if (total > 300) {
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.13<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.87<<endl;
        }
            break;
        case 3:
        if (total <= 100){
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$0,00"<<endl;
            cout<<"O valor final da compra é de R$"<<total<<endl;
        }
        else if (total > 100 && total <= 300) {
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.05<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.95<<endl;
        }
        else if (total > 300) {
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.1<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.90<<endl;
        }
            break;
        case 4:
        if (total <= 100){
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do acréscimo é de R$"<<total * 0.02<<endl;
            cout<<"O valor final da compra é de R$"<<total * 1.02<<endl;
        }
        else if (total > 100 && total <= 300) {
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.03<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.97<<endl;
        }
        else if (total > 300) {
            cout<<"Valor original da compra é de R$"<<total<<endl;
            cout<<"O valor do desconto é de R$"<<total * 0.08<<" (2% de acréscimo pelo cartão)"<<endl;
            cout<<"O valor final da compra é de R$"<<total * 0.92<<" (2% de acréscimo pelo cartão)"<<endl;
        }
            break;
        default:
            cout<<"Opção de pagamento inválida!"<<endl;
            break;
    }
}