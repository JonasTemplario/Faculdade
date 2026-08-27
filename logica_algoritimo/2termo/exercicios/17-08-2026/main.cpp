#include <iostream>

using namespace std;

int soma(int x, int y){
    int a;
    a = x + y;
    return a;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;
    int resultado;
    cout<<"Informe um número: ";
    cin>> n;

    resultado = n*soma(10, 10);
    cout<<resultado<<endl;

    resultado = n + 20*soma(2, 3);
    cout<<resultado<<endl;

    cout<<endl;
    system("pause");
}