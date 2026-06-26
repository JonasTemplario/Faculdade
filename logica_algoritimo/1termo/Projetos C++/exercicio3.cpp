#include <iostream>

using namespace std;

int main(){

    int n1, n2, n3, media;

    cout<<"Insira os 3 números em sequência:"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;

    media=(n1 + n2 + n3) / 3;

    cout<<"Os número "<<n1<<", "<<n2<<" e "<<n3<<" dão média "<<media<<endl;

    return 0;
}