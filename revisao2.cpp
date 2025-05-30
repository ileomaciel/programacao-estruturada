#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[8], i;
    int multiplo = 0;

    for(i = 0; i < 8; i++){
        cout << "Digite um valor na posição " << i + 1 << " do vetor: ";
        cin >> vetor[i];
    }
    
    cout << "\nOs valores digitados são: ";
    for (int i = 0; i < 8; i++) {
        cout << vetor[i] << " - ";
        if(vetor[i] % 3 == 0){
            multiplo++;
        }
    }

    cout << "\n\nForam digitados " << multiplo << " números múltiplos de 3";

    return 0;
}
