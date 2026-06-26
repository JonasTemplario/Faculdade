#include <iostream>
using namespace std;

int main() {

    float litros;
    float totalLitros = 0;
    float media;
    float maior = 0;

    char tipo;
    char continuar;

    int total = 0;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    do {

        do {

            cout << "Digite os litros abastecidos: ";
            cin >> litros;

            if (litros <= 0) {
                cout << "Valor invalido." << endl;
            }

        } while (litros <= 0);

        do {

            cout << "Tipo de combustivel (A/G/D): ";
            cin >> tipo;

            if (tipo != 'A' && tipo != 'a' &&
                tipo != 'G' && tipo != 'g' &&
                tipo != 'D' && tipo != 'd') {

                cout << "Tipo invalido." << endl;
            }

        } while (tipo != 'A' && tipo != 'a' &&
                 tipo != 'G' && tipo != 'g' &&
                 tipo != 'D' && tipo != 'd');

        total++;
        totalLitros += litros;

        if (litros > maior) {
            maior = litros;
        }

        if (tipo == 'A' || tipo == 'a') {
            alcool++;
        }
        else if (tipo == 'G' || tipo == 'g') {
            gasolina++;
        }
        else {
            diesel++;
        }

        cout << "Deseja continuar? (S/N): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    media = totalLitros / total;

    cout << endl;
    cout << "Total de abastecimentos: " << total << endl;
    cout << "Total de litros: " << totalLitros << endl;
    cout << "Media: " << media << endl;
    cout << "Abastecimentos com alcool: " << alcool << endl;
    cout << "Abastecimentos com gasolina: " << gasolina << endl;
    cout << "Abastecimentos com diesel: " << diesel << endl;
    cout << "Maior abastecimento: " << maior << endl;

    return 0;
}