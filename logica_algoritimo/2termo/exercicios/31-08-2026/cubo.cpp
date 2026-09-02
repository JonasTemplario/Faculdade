#include <iostream>
#include <cmath>

using namespace std;

int funCubo(int a){
    return pow(a , 3);
}
int main(){
    int n, res;

    cout<<"Digite o número que você quer calcular o cubo"<<endl;
    cin>>n;

    res = funCubo(n);

    cout<<"O cubo do número "<<n<<" é: "<<res<<endl;
}