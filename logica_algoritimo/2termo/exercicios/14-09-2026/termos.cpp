#include <iostream>
#include <cmath>

using namespace std;

 int potencia (int base, int pot){
    for(int i = 2; i <= 16; i++){
        pot = i;

    if( pot == 0 ){
        return 1;
    }
    else if( pot == 1){
        return base;
    }
    else {
        return base * potencia(base, pot - 1); // É o mesmo que 2 * 2 ^ 2 que é igual a 2 ^ 3
    }
}
}

int fatorial(int n){  
    for(int i = 2; i <= 16; i++){
    if ( i == 0 || i == 1){
        return 1;
    }
    return i * fatorial(i - 1);
    }
}



int termo( int num ){
    
}

int main(){
    int x;

    cout<<"Digite o valor de x.";
    cin>>x;

    
}