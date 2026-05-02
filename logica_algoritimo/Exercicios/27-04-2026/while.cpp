#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main(){
    /* 1) Faça um programa que, para um número indeterminado de pessoas: leia a idade de
cada uma, sendo que a idade 0 (zero) indica o fim da leitura e não deve ser
considerada. A seguir calcule:
• o número de pessoas;
• a idade média do grupo;
• a menor idade e a maior idade. */
    int enter;


    int idade, cont=0, soma=0, menor=999, maior=0;
    float media;

    while (true)
    {
        cout<<"Digite a idade da "<<cont + 1<<" pessoa: ";
        cin>>idade;
        
        if (idade == 0){
            break;
        }
            cont++;
            soma+=idade;
            if (idade<menor){
                menor=idade;
            }
            if (idade>maior){
                maior=idade;
            }
        }

    if (cont>0){
        media=(float)soma/cont;
        cout<<"Resultados:"<<endl;
        cout<<"Número de pessoas: "<<cont<<endl;
        cout<<"Idade média do grupo: "<<media<<endl;
        cout<<"Menor idade: "<<menor<<endl;
        cout<<"Maior idade: "<<maior<<endl;
    }
    else{
        cout<<"Nenhuma idade válida foi digitada."<<endl;
    }
    /*2) Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço while, pede ao usuário para que entre com as notas de
todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a média, aritmética, da turma. */
    int alunos, opc2=1, nota2, soma2=0, media2, cont2=0;

    cout<<"Quantos alunos tem na sala:";
    cin>>alunos;

    while(opc2<=alunos){
        cout<<"Qual a nota do aluno?";
        cin>>nota2;
        opc2++;
        cont2++;
        soma2+=nota2;/* Porque estamos somando as notas. O += serve para adicionar o valor da variável à outra variável. NO caso  */
    }
    media2=soma2/cont2;
    cout<<"A média da turma é: "<<media2<<endl;

    /*3) Faça um programa, utilizando while, que mostre na tela de 0 até N, em que N é o limite
    /*  */
     int num3, op3=0;

    cout<<"Digite o número máximo para contar até...";
    cin>>num3;

    while( op3 <= num3){
        cout<<op3<<endl;
        op3++;
}
    /* 4) Escreva um código que imprima a tabuada de 1 a 10, de forma organizada e clara. */
    int tabuada=1;

    cout<<"Escreva algo e aperte ENTER para ver a tabuada"<<endl;
    cin>>enter;

     while(tabuada<=10){
        cout<<"Tabuada do "<<tabuada<<":"<<endl;

        int op4=1;

        while(op4<=10){
            cout<<tabuada<<" x "<<op4<<" = "<<tabuada*op4<<endl;
            op4++;
        }
        cout<<endl;
        tabuada++;
        }
        /* 5) Leia números positivos do teclado e some-os até que seja digitado um número
negativo. Mostre a soma final. */
            float num5, soma5=0;
            
        while(true){

            cout<<"Digite um número para somar (coloque um número negativo para sair): ";
            cin>>num5;

            if (num5 < 0){
                break;
            }
            cout<<"A soma está em: "<<soma5+num5<<endl;
            soma5+=num5;
        }

        /* 6) Peça um número inicial e faça uma contagem regressiva até 0 */
        int num6;

        cout<<"Digite o número para contar até 0: ";
        cin>>num6;

        while(num6>=0){
            cout<<num6<<endl;
            num6--;
        }

        /* 7) Solicite que o usuário digite uma senha. Continue pedindo até que ele acerte a senha
correta (ex.: 1234). */
        int senha7=123, tentativa7;

        while(true){
        
        cout<<"Digite a senha: ";
        cin>>tentativa7;
        
            if(tentativa7!=senha7){
                cout<<"Senha incorreta, tente novamente"<<endl;
            }
            else{
                cout<<"Senha correta!"<<endl;
                break;
            }
        }

        /* 8) Crie um programa que simule o crescimento de duas populações:
População A: começa com 80.000 habitantes e cresce 3% ao ano.
População B: começa com 200.000 habitantes e cresce 1,5% ao ano.
Use while para calcular em quantos anos a população A ultrapassa ou iguala a B. */
        
    int A=80000, B=200000, cont8=2026;

    cout<<"A população da cidade A é de 80.000 abitantes. E a da cidade B é de 200.000. Digite algo e aperte ENTER para ver quando a população da cidade A vai ultrapassar a da cidade B."<<endl;
    cin>>enter;
        
    while(A<B){

    cout<<"Ano "<<cont8<<endl;
    cout<<"População cidade A é de: "<<A<<endl;
    cout<<"População cidade B é de: "<<B<<endl;

    A=A+(A*0.03);
    B=B+(B*0.015);
    cont8++;

    if(A>B){
        cout<<"A população da cidade A ultrapassou a da cidade B em "<<cont8<<" ( "<<cont8-2026<<" anos )"<<endl;
        break;
        }
    }

    /* 9) Escreva um programa que gere a sequência de Fibonacci.
O usuário deve informar um valor limite.
O programa deve exibir todos os números da sequência menores ou iguais a esse
limite. */

        int sequencia9=0, primeiro9=1, segundo9=0, limite9;

    cout<<"Digite o limite da sequência."<<endl;
    cin>>limite9;

    cout<<"Sequencia de FIbonachi:"<<endl;

    if(limite9>=0){
         cout<<"0" <<endl;
    }

    while(true){
    
    segundo9=sequencia9+primeiro9;

    if(segundo9>limite9){
        break;
    }

    cout<<segundo9<<endl;

    sequencia9=primeiro9;
    primeiro9=segundo9;
}
    return 0;
}
