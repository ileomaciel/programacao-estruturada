#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){ 
            cout << "Digite um valor para preencher a matriz [" << i << ", " << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    cout << "\nOs valores da matriz são:" << endl;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
