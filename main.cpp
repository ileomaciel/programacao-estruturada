#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream arq1;
    arq1.open("nomes.txt", ios::app);

    if(arq1.is_open()){
        arq1 << "Carlos" << endl;
        arq1 << "José" << endl;
        arq1.close();
    }else{
        cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }

    return 0;
}
