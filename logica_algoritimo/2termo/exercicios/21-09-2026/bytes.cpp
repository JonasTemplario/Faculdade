#include <iostream>
#include <cmath>

using namespace std;

void arquivo(float bytes){
    float k = bytes / 1024;
    float m = k / 1024;
    float g = m / 1024;
    
    cout<<"O tamanho do arquivo em Kbytes, Mbytes e Gbytes é de, respectivamente: "<<k<<" ,"<<m<<" e "<<g<<"."<<endl;
}


int main (){

    float bt;

    cout<<"Digite o tamanho do arquivo em bytes"<<endl;
    cin>>bt;

    arquivo(bt);
}