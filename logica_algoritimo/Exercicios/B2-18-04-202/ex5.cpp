#include <iostream>
using namespace std;

int main() {

    int opcao;

    float celsius;
    float fahrenheit;

    float metros;
    float kilometros;

    do {

        cout << endl;
        cout << "1 - Celsius para Fahrenheit" << endl;
        cout << "2 - Fahrenheit para Celsius" << endl;
        cout << "3 - Metros para kilometros" << endl;
        cout << "4 - Kilometros para metros" << endl;
        cout << "5 - Sair" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {

            case 1:

                cout << "Digite a temperatura em Celsius: ";
                cin >> celsius;

                fahrenheit = (celsius * 9/5) + 32;

                cout << "Resultado: " << fahrenheit << endl;

                break;

            case 2:

                cout << "Digite a temperatura em Fahrenheit: ";
                cin >> fahrenheit;

                celsius = (fahrenheit - 32) * 5/9;

                cout << "Resultado: " << celsius << endl;

                break;

            case 3:

                cout << "Digite os metros: ";
                cin >> metros;

                kilometros = metros / 1000;

                cout << "Resultado: " << kilometros << endl;

                break;

            case 4:

                cout << "Digite os kilometros: ";
                cin >> kilometros;

                metros = kilometros * 1000;

                cout << "Resultado: " << metros << endl;

                break;

            case 5:

                cout << "Programa encerrado." << endl;

                break;

            default:

                cout << "Opcao invalida." << endl;
        }

    } while (opcao != 5);

    return 0;
}