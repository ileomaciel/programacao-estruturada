#include <iostream>
#include <fstream>
#include <string.h>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    string abc;

    ifstream arq_leitura("notas.txt");

    if(arq_leitura.is_open()){
        while(! arq_leitura.eof()){
            getline(arq_leitura, abc);
            cout << abc << endl;
        }
        arq_leitura.close();
    }else{
        cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }
    return 0;
}
