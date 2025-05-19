#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int produto, soma = 0, i;

    cout << "Quantos produtos você irá comprar: ";
    cin >> produto;
    int vetor[produto];

    for(i = 0; i < produto; i++){
        cout << "Digite o valor do " << (i+1) << "º Produto: ";
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << "\nA soma dos Produtos é: " << soma << endl;

    return 0;
}

