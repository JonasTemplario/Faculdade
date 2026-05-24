#include <iostream>
using namespace std;

int main() {

    float nota;
    float soma = 0;
    float media;
    float maior = 0;
    float menor = 10;

    int alunos = 0;
    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;

    char continuar;

    do {

        do {

            cout << "Digite a nota: ";
            cin >> nota;

            if (nota < 0 || nota > 10) {
                cout << "Nota invalida." << endl;
            }

        } while (nota < 0 || nota > 10);

        soma += nota;
        alunos++;

        if (nota > maior) {
            maior = nota;
        }

        if (nota < menor) {
            menor = nota;
        }

        if (nota >= 6) {
            aprovados++;
        }
        else if (nota >= 4) {
            recuperacao++;
        }
        else {
            reprovados++;
        }

        cout << "Deseja continuar? (S/N): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    media = soma / alunos;

    cout << endl;
    cout << "Quantidade de alunos: " << alunos << endl;
    cout << "Media da turma: " << media << endl;
    cout << "Maior nota: " << maior << endl;
    cout << "Menor nota: " << menor << endl;
    cout << "Aprovados: " << aprovados << endl;
    cout << "Recuperacao: " << recuperacao << endl;
    cout << "Reprovados: " << reprovados << endl;

    return 0;
}