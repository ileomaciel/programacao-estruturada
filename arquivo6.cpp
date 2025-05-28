#include <iostream>
#include <fstream>
#include <string.h>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    string linha;
    fstream arq;

    arq.open("nomes.txt", ios::out | ios::app);

    if(arq.is_open()){
        arq << "Maria Donizeti" << endl;
        arq << "Ivan Lopes" << endl;
        arq.close();

        arq.open("nomes.txt", ios::in);
        while(! arq.eof()){
            getline (arq, linha);
            cout << linha << endl;
        arq.close();
    }else{
        cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }
    return 0;
}
