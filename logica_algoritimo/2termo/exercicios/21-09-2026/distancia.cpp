#include <iostream>
#include <cmath>

using namespace std;

void distancia(double x1, double y1, double x2, double y2){
    double res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        
    cout<<"A distância entre os dois pontos é de "<<res<<endl;;
}


int main(){
    int x11, x22, y11, y22;

    cout<<"Digite o número das coordenadas X1, Y1, X2, Y2, respectivamente"<<endl;
    cin>>x11;
    cin>>y11;
    cin>>x22;
    cin>>y22;

    distancia(x11, y11, x22, y22);
}