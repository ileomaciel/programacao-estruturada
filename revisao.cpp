#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[10], i;
    int soma = 0;

    for(i = 0; i < 10; i++){
        cout << "Digite um valor na posição " << i << " do vetor: ";
        cin >> vetor[i];
    }
    
    cout << "\nOs valores digitados são: ";
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " - ";
        soma += vetor[i];
    }

    cout << "\n\nA soma dos valores digitados é: " << soma;

    return 0;
}
