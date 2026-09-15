#include <iostream>
#include <cmath>

using namespace std;

int fatorial(int n){
    if ( n == 0 || n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    cout<<"Digite um número: ";
    cin>>num;

    cout<<"O fatorial deste número é: "<<fatorial(num)<<endl;

    system("pause");
}