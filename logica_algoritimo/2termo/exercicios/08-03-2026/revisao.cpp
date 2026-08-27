#include <iostream>
#include <cmath>

using namespace std;

main(){

    int n1;

    cout << "Escreva um número: "<<endl;
    cin>>n1;

    if (n1 >= 0){
        cout<<"A raiz quadrada do seu número é: "<<sqrt(n1)<<endl; // sqrt é operador para pegar raiz quadrada
    }
    else{
        cout<<"O quadrado do seu número é: "<<pow(n1, 2)<<endl; // pow eleva o primeiro número (n1) pelo segundo (2)
    }


    cout<<endl;
    system("pause");

}