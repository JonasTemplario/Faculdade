#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int jogada(){
    return rand() % 2;
}
int main(){
    int cara = 0, coroa = 0;

    srand(time(0));

    for(int i = 1; i <= 100; i++){
        
        int res = jogada();

        if(res == 0){
            cout<<"Cara"<<endl;
            cara++;
        } else {
            cout<<"Coroa"<<endl;
            coroa++;
        }
    }
    cout<<"Cara foi o resultado "<<cara<<" vezes."<<endl;
    cout<<"Coroa foi o resultado "<<coroa<<" vezes."<<endl;

    return 0;
}