#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, m;

    cout << "Digite o número da MATRIZ que você deseja: ";
    cin >> m;
    int matriz[m][m];


    for(i = 0; i < m; i++){ //linha
        for(j = 0; j < m; j++){ //coluna
            cout << "Digite um valor para preencher a matriz [" << i << ", " << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for(i = 0; i < m; i++){ //linha
        for(j = 0; j < m; j++){ //coluna
            if(matriz[i] != matriz[j]){
                cout << matriz[i][j] << "\t";
            }

        }
        cout << endl;
    }

    return 0;
}
