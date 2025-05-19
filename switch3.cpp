#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char resultado;
    float n1, n2, soma, subtracao;

    cout << "Escolha a operação que você deseja!!!" << endl;
    cout << "Digite + para SOMA" << endl;
    cout << "Digite - para SUBTRAÇÃO" << endl;
    cin >> resultado;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;

    switch(resultado){
        case '+':
            soma = n1 + n2;
            cout << "o resultado de " << n1 << " + " << n2 << " é: " << soma << endl;
        break;
        case '-':
            subtracao = n1 - n2;
            cout << "o resultado de " << n1 << " - " << n2 << " é: " << subtracao << endl;
        break;
        default:
            cout << "Opção Inválida!!! \n";
    }

    return 0;
}
