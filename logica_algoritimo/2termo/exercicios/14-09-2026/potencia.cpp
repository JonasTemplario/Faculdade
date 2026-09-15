#include <iostream>
#include <cmath>

using namespace std;

int potencia (int x, int y, int z = 1){
    if( y == 0 ){
        return 1;
    }
    else if( y == 1){
        return x;
    }
    else {
        return x * potencia(x, y - 1); // É o mesmo que 2 * 2 ^ 2 que é igual a 2 ^ 3
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2;

    cout<<"Ditie o número que quer elevar."<<endl;
    cin>>num1;

    cout<<"Digite o número da potência."<<endl;
    cin>>num2;

    cout<<num1<<" elevado a "<<num2<<" é "<<potencia(num1, num2);
}