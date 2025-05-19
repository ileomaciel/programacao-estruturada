#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 5, i;
    int vetor[num];

    for(i = 0; i < num; i++){
        cout << "Digite um número: ";
        cin >> vetor[i];
    }

    for(i = 0; i < num; i++){
        if(vetor[i] % 2 == 0){
            cout << vetor[i] << " - PAR" << endl;
        }else{
            cout << vetor[i] << " - ÍMPAR" << endl;
            }
        }

    return 0;
}
