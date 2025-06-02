#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

float imc(float peso, float altura) {
    return (peso / (altura * altura));
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int NCLIENTE;

    cout << "Programa para calcular o IMC de uma pessoa\n\n";
    cout << "Quantos CLIENTES você deseja cadastrar?: ";
    cin >> NCLIENTE;
    cin.ignore();

    struct EstruturaCliente {
        char nome[50];
        float peso;
        float altura;
    };

    EstruturaCliente strCliente[NCLIENTE];

    for (int i = 0; i < NCLIENTE; i++) {
        cout << "\nCadastro de CLIENTE #" << i + 1 << endl;

        cout << "Informe o Nome do Cliente: ";
        cin.getline(strCliente[i].nome, 50);
        cout << "Informe o Peso do Cliente (kg): ";
        cin >> strCliente[i].peso;
        cout << "Informe a Altura do Cliente (m): ";
        cin >> strCliente[i].altura;
        cin.ignore();

        cout << endl;
    }

    cout << "\nCLIENTES Cadastrados com Sucesso!!!\n" << endl;

    for (int i = 0; i < NCLIENTE; i++) {
        cout << "CLIENTE #" << (i + 1) << endl;
        cout << "Nome: " << strCliente[i].nome << endl;
        cout << "Peso: " << strCliente[i].peso << endl;
        cout << "Altura: " << strCliente[i].altura << endl;
        cout << "IMC: " << imc(strCliente[i].peso, strCliente[i].altura) << endl << endl;
        
    }

    return 0;
}
