#include <iostream>
#include <cmath>

using namespace std;

float calcularF(float &a){
    return ( a * 1.8 ) + 32;
}

int main(){
    float c, f;

    cout<<"Digite quantos graus em, como 42.5 °C ( Celsius) para converter para °F ( Fahrenheit )"<<endl;
    cin>>c;

    f = calcularF(c);

    cout<<"A temp em Fahrenheit é: "<<f<<endl;

}