#include <iostream>
#include <fstream>

using namespace std;

int main(){

    char nome[30];

    ofstream arquivo;
    arquivo.open("arquivoFOR.txt");

    for(int i = 0; i < 5; i++){
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << endl;

    }
    arquivo.close();

    return 0;
}
