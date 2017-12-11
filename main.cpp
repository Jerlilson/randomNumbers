#include <iostream>
#include <sstream>

using namespace std;

int a = 34;
int c = 91;
int m = 78;
int smt;

void congAleatorio(int mul, int qtd){
    cout << "\nAleatórios gerados - \n" << endl;
    int number;
    for (int i = 0; i < qtd; i++){
        number = ((a * mul) + c)%m;
        cout << number << endl;
        mul = number;
        number = 0;
    }    
}

void midAleatorio(int smt, int qtd){
    cout << "\nAleatórios gerados - \n" << endl;
    int quad = smt * smt;
    for(int i = 0; i < qtd; i++){
        int left = quad % 1000 / 100; //1
        int right = quad % 1000 % 100 / 10; //6
        int r = (left * 10) + right;
        cout << r << endl;
        quad = r * r;
    }
}

int main(){
    int qtd;
    int opt;
    int start;

    cout << "------------\n";
    cout << "1 - Método da Congruência \n";
    cout << "2 - Método da Mid Square \n";
    cout << "0 - Sair \n";
    cout << "------------\n";
    cout << "Escolha o método desejado para gerar os números aleatórios: ";
    cin >> opt;

    while(opt != 0){
        cout << "Digite a quantidade de números aleatórios a serem gerados: ";
        cin >> qtd;
        cout << "Deseja informar uma semente? 1-(Sim) | 2-(Não): ";
        cin >> start;
        if(start == 1){
            cout << "Informe uma semente: ";
            cin >> smt;
        }else{
            if (opt == 1){
                smt = 194;
            }
            else{
                smt = 76;
            }
        }

        switch (opt){
            case 1:
                congAleatorio(smt, qtd); break;

            case 2:
                midAleatorio(smt, qtd); break;

            default:
                cout << "Opção inválida digite uma opção inválida: ";
        }

        cout << "------------\n";
        cout << "1 - Método da Congruência \n";
        cout << "2 - Método da Mid Square \n";
        cout << "0 - Sair \n";
        cout << "------------\n";
        cout << "Escolha o método desejado para gerar os números aleatórios: ";
        cin >> opt;
    }
    
    return 0;
}