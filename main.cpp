#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream arq1;
    arq1.open("nomes.txt", ios::app);

    if(arq1.is_open()){
        arq1 << "Carlos" << endl;
        arq1 << "Jos�" << endl;
        arq1.close();
    }else{
        cout << "ERRO: arquivo n�o foi aberto ou n�o existe" << endl;
    }

    return 0;
}
