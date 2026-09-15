#include <iostream>
#include <cmath>

using namespace std;

int soma(int v){
    if ( v == 1 ){
        return 1;
    }
    else{
        return (v + soma(v-1));
    }
}


int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout<<"Informe um número:";
    cin>>n;

    cout<<"O resultado da função é: "<<soma(n);

    cout<<endl;
    system("pause");
}
