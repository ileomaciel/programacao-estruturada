#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[2][3];
    int i, j;

    for(i = 0; i < 2; i++){ //linha
        for(j = 0; j < 3; j++){ //coluna
            cout << "Digite um valor para preencher a matriz [" << i << ", " << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for(i = 0; i < 2; i++){ //linha
        for(j = 0; j < 3; j++){ //coluna
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
