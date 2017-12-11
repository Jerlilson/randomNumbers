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

    while(opt != 0){
        cout << "------------\n";
        cout << "1 - Método da Congruência \n";
        cout << "2 - Método da Mid Square \n";
        cout << "0 - Sair \n";
        cout << "------------\n";
        cout << "Escolha o método desejado para gerar os números aleatórios" << endl;
        cin >> opt;

        switch (opt){
            case 1:
                cout << "Digite a quantidade de números aleatórios a serem gerados: \n";
                cin >> qtd;
                cout << "Deseja informar uma semente? \n1 - (Sim) | 2 (Não) " << endl;
                cin >> start;
                if(start == 1){
                    cout << "Informe uma semente: \n";
                    cin >> smt;
                    congAleatorio(smt, qtd);
                }else{
                    congAleatorio(194, qtd);
                }
            break;

            case 2:
                cout << "Digite a quantidade de números aleatórios a serem gerados: \n";
                cin >> qtd;
                cout << "Deseja informar uma semente? \n1 - (Sim) | 2 (Não) " << endl;
                cin >> start;
                if(start == 1){
                    cout << "Informe uma semente: \n";
                    cin >> smt;
                    midAleatorio(smt, qtd);        
                }else{
                    midAleatorio(76, qtd);        
                }
            case 0:
                
            break;

            default:
            cout << "Opção inválida digite uma opção inválida" << endl;
        }
    }
    
    return 0;
}