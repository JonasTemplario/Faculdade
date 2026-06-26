#include <iostream>
using namespace std;

int main() {

    int codigo;
    int quantidade;
    int totalItens = 0;

    int codigoMaisCaro = 0;
    int acima100 = 0;

    float preco;
    float totalCompra = 0;
    float maiorPreco = 0;

    char continuar;

    do {

        cout << "Digite o codigo do produto: ";
        cin >> codigo;

        do {

            cout << "Digite o preco: ";
            cin >> preco;

            if (preco < 0) {
                cout << "Preco invalido." << endl;
            }

        } while (preco < 0);

        do {

            cout << "Digite a quantidade: ";
            cin >> quantidade;

            if (quantidade <= 0) {
                cout << "Quantidade invalida." << endl;
            }

        } while (quantidade <= 0);

        totalCompra += preco * quantidade;
        totalItens += quantidade;

        if (preco > maiorPreco) {
            maiorPreco = preco;
            codigoMaisCaro = codigo;
        }

        if (preco > 100) {
            acima100++;
        }

        cout << "Deseja continuar? (S/N): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    cout << endl;
    cout << "Total da compra: " << totalCompra << endl;
    cout << "Quantidade total de itens: " << totalItens << endl;
    cout << "Codigo do produto mais caro: " << codigoMaisCaro << endl;
    cout << "Valor do produto mais caro: " << maiorPreco << endl;
    cout << "Produtos acima de 100 reais: " << acima100 << endl;

    return 0;
}