#include <iostream>

using namespace std;

// int main(){

//     int num, i, resultado = 1;

//     cout<<"Digite um número para verificar se é primo:"<<endl;
//     cin>>num;

//     if(num <= 1){
//         resultado = 0;
//     }
//     else{
//         for(i = 2; i < num; i++){
//             if(num % i == 0){
//                 resultado = 0;
//                 break;
//             }
//         }
//     }
//     if(resultado == 0){
//         cout<<"Não é primo";
//     }
//     else{
//         cout<<"É primo";
//     }
// }
int fatorial(int f){
    int fat = 1;
    while(f > 1){
        fat = fat * f;
        f--;
    }
    return fat;
}
int arranjo(int n, int p){
    if(p > n || p <= 0 || n <= 0){
        return -1;
    }
    return fatorial(n) / fatorial(n-p);   
}


int main(){
    int n, p, res;

    cout<<"Informe o número N:";
    cin>>n;
    cout<<"Informe o número P:";
    cin>>p;

    res = arranjo(n, p);

    if(res == -1){
        cout<<"Entrada inválida(-1)";
    }
    else{
        cout<<"O arranjo de "<<n<<" tomado "<<p<<" a "<<p<<" é: "<<res<<endl;
    }

    return 0;
}