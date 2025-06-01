#include <iostream>
#include <locale>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    float matriz[4][5];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){ 
            cout << "Digite um valor para preencher a matriz [" << i << ", " << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    cout << "\nOs valores da matriz são:" << endl;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "\nA matriz com os valores resultantes:" << endl;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            cout << (matriz[i][j] /2) << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
