#include <iostream>

using namespace std;

void funcao(float a, float b, float c, float d, float e, float f, float g){
    float resultado = a - b * ((c + d - f) / (e - 1)) + g;
    
    cout<<"O resultado da função é: "<<resultado<<endl;;
}


int main(){
    
    float ltA, ltB, ltC, ltD, ltE, ltF, ltG;

    cout<<"Digite as letras de A até G."<<endl;
    cin>>ltA;
    cin>>ltB;
    cin>>ltC;
    cin>>ltD;
    cin>>ltE;
    cin>>ltF;
    cin>>ltG;

    funcao(ltA, ltB, ltC, ltD, ltE, ltF, ltG);
}
