#include <iostream>
#include <windows.h>
#include <stdlib.h>


using namespace std;

void boneco(int erro){

    switch(erro){
        case 0:
            cout << "\n\n";
            cout << "            _______________";
            cout << "\n            |            |\n            |           \n            |            \n            |             \n            |            \n            |\n            |\n        ____|____"<< endl;
            break;
        case 1:
            cout << "\n\n";
            cout << "            _______________";
            cout << "\n            |            _|_\n            |           |___|\n            |            \n            |             \n            |            \n            |\n            |\n        ____|____"<< endl;
            break;
        case 2:
            cout << "\n\n";
            cout << "            _______________";
            cout << "\n            |            _|_\n            |           |___|\n            |             |\n            |             |\n            |            \n            |\n            |\n        ____|____"<< endl;
            break;
        case 3:
            cout << "\n\n";
            cout << "            _______________";
            cout << "\n            |            _|_\n            |           |___|\n            |            /|\n            |             |\n            |            \n            |\n            |\n        ____|____"<< endl;
            break;
        case 4:
            cout << "\n\n";
            cout << "            _______________";
            cout << "\n            |            _|_\n            |           |___|\n            |            /|\\\n            |             |\n            |            \n            |\n            |\n        ____|____"<< endl;
            break;
        case 5:
            cout << "\n\n";
            cout << "            _______________";
            cout << "\n            |            _|_\n            |           |___|\n            |            /|\\\n            |             |\n            |            / \n            |\n            |\n        ____|____"<< endl;
            break;
        case 6:
            cout << "\n\n";
            cout << "            _______________";
            cout << "\n            |            _|_\n            |           |___|\n            |            /|\\\n            |             |\n            |            / \\\n            |\n            |\n        ____|____"<< endl;
            break;

    }


}



int main(void){

    int tam, aux = 0, i, aux2, erro = 0, tentativa = 6, opc = 0;
    char palavra[501], letra, letAux;

  do{
    system("cls");

    Sleep(500);
    cout << "---";

    Sleep(500);
    cout <<"Jogo";

    Sleep(500);
    cout << " da";

    Sleep(500);
    cout << " Forca";

    Sleep(500);
    cout << "---";


    cout << "\n\nDigite uma palavra de ate 500 caracteres: ";
    cin >> palavra;

    cout << "\nIniciando";

    for(i = 0; i < 4; i++){
        Sleep(500);
        cout << ".";
    }

    //Calcula tamanho:

    for(tam = 0; palavra[tam] != '\0'; tam++){

    }

    //Vetor que armazena as posicoes:
    int vTam[tam];

    for(i = 0; i < tam; i++){
        vTam[i] = -1;
    }


    do{

        system("cls");

        boneco(erro);

        cout << "\n\n\n\n\n\n";

        for(i = 0; i < tam; i++){
            if(vTam[i] == -1){
                cout << "___ ";
            }
            else{
                cout << "_" << palavra[i] << "_ ";
            }
        }

        cout << "\t\t\t\t\tTentativa: " << tentativa;

        cout << endl << "Digite uma letra: ";
        cin >> letra;

        if(letra >= 65 && letra <= 90){
            letAux = letra + 32;
        }
        else if(letra >= 97 && letra <= 122){
            letAux = letra - 32;
        }

        aux2 = 0;

        for(i = 0; i < tam; i++){
            if(letra == palavra[i] || letAux == palavra[i]){
                vTam[i] = 0;
                aux++; //Contagem para acabar o jogo.
                aux2 = 1;
            }
        }

        if(aux2 == 0){
            erro++;
            tentativa--;
        }

    }while(aux < tam && erro < 6);

    system("cls");

    boneco(erro);

    cout << "\n\n\n\n\n\n";

    for(i = 0; i < tam; i++){
        if(vTam[i] == -1){
                cout << "___ ";
        }
        else{
                cout << "_" << palavra[i] << "_ ";
        }
    }

    cout << "\t\t\t\t\tTentativa: " << tentativa;

    cout << "\n\nFim de Jogo!";

    if(erro == 6){
        cout << "\n\nNao foi dessa vez...";
    }
    else{
        cout << "\n\nParabens!";
    }

    cout << endl;

   cout << "Jogar novamente?[1 - Sim, 2 - Nao]: ";
   cin >> opc;

   while(opc != 1 && opc != 2){
    cout << "\nOpcao errada digite novamente[1- Sim, 2 - Nao]: ";
    cin >> opc;
   }

  }while(opc == 1);
    return 0;
}
