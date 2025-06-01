#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[6][6];
    int i, j;

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){ 
            cout << "Digite um valor para preencher a matriz [" << i << ", " << j << "]: ";
            cin >> matriz[i][j];
        }
    }
  
    cout << "\nOs valores da matriz são:" << endl;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
  
    cout << "\nOs valores da diagonal secundária são:" << endl;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(matriz[i] == matriz[j]){
                cout << matriz[i][6 - 1 - i] << "\t";
            }
        }    
    }
    return 0;
}
