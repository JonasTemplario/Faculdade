#include <iostream>
using namespace std;

int main() {

    string usuario;
    int senha;

    int tentativas = 0;

    while (tentativas < 3) {

        cout << "Usuario: ";
        cin >> usuario;

        cout << "Senha: ";
        cin >> senha;

        if (usuario == "admin" && senha == 5671) {

            cout << "Acesso permitido." << endl;
            break;
        }
        else {

            tentativas++;

            cout << "Usuario ou senha incorretos." << endl;

            if (tentativas < 3) {
                cout << "Tentativas restantes: ";
                cout << 3 - tentativas << endl;
            }
        }
    }

    if (tentativas == 3) {
        cout << "Acesso bloqueado." << endl;
    }

    return 0;
}