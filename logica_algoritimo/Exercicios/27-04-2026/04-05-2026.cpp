#include <iostream>
#include <string>

using namespace std;

int main(){

    char sexo;
    int idade=0, idadeSoma=0, sexoFem=0, sexoMasc=0, livrosMenores=0, livrosSoma=0, livrosPessoa=0, leram=0, masc=0, fem=0, naoLeram=0;

    while(idade >= 0){

    cout<<"Digite a idade da pessoa: "<<endl;
    cin>>idade;
        if (idade<0){
            break;
        }

    cout<<"Digite o sexo da pessoa(M para Masculino e F para Feminino): "<<endl;
    cin>>sexo;

    cout<<"Quantos livros ele(a) leu ?: "<<endl;
    cin>>livrosPessoa;

        /* Mulheres que levaram mais de 5 livros. */
        if(sexo='F' && livrosPessoa>5){
            sexoFem+=livrosPessoa;
        }
        /* QUantidade total de livros levados por menores de 10 anos. . */
        if(livrosPessoa>0 && idade<=10){
            livrosMenores+=livrosPessoa;
        }
        /* Média de idade dps  */
        if(sexo='M' && livrosPessoa<5){
            sexoMasc+=idade;
        }

        /* Quantidade de homens e mulheres. */
        if(sexo='M'){
            masc++;
        }
        else{
            fem++;
        }

        if(livrosPessoa=0){
            naoLeram++;
        }
        if(livrosPessoa>0){
        leram++;
        }
        
    }
    int mediaHomens=sexoMasc/masc, percentual=(leram/100)*naoLeram;

    cout<<"A quantidade total de livros lidos por menores de 10 anos é de "<<livrosMenores<<"."<<endl;
    cout<<"A quantidade de mulheres que levaram 5 livros ou mais é de "<<sexoFem<<"."<<endl;
    cout<<"A média de idade dos homens que leram menos de 5 livros é de "<<mediaHomens<<"."<<endl;
    cout<<"O percentual de pessoas que não leram livros é de "<<percentual<<"."<<endl;
}

/* Leram / 100 * quem não leu */

