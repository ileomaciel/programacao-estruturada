#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream arquivo;
    arquivo.open("arquivo.txt");

    arquivo << "Gabriel" << endl;
    arquivo << "Jess�" << endl;
    arquivo << "Maria Luiza" << endl;

    arquivo.close();

    cout << "Arquivo criado com Sucesso!" << endl;

    return 0;
}
