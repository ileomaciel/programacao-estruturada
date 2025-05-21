#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int NPESSOA;

    cout << "Quantas Pessoas você deseja cadastrar: ";
    cin >> NPESSOA;

    struct EstruturaPessoa{
        char nome[60];
        char etnia[10];
        float peso;
        int idade;
        char sexo;
        char telefone[20];
    } strPessoa[NPESSOA];
    fflush(stdin);

    int i;
    for(i = 0; i < NPESSOA; i++){
        cout << "Informe o Nome: ";
        cin.getline(strPessoa[i].nome, 60);
        cout << "Informe a Etnia: ";
        cin.getline(strPessoa[i].etnia, 10);
        cout << "Informe o Peso: ";
        cin >> strPessoa[i].peso;
        cout << "Informe a Idade: ";
        cin >> strPessoa[i].idade;
        cout << "Informe o Sexo (M/F): ";
        cin >> strPessoa[i].sexo;
        cout << "Informe o Telefone: ";
        cin >> strPessoa[i].telefone, 20;
        cout << endl << endl;
        fflush(stdin);
    }

    cout << "\nPessoas Cadastradas com Sucesso!!!\n" << endl;

        for(i = 0; i < NPESSOA; i++){
            cout << "Aluno: " << strPessoa[i].nome << endl;
            cout << "Etnia: " << strPessoa[i].etnia << endl;
            cout << "Peso: " << strPessoa[i].peso << endl;
            cout << "Idade: " << strPessoa[i].idade << endl;
            cout << "Sexo: " << strPessoa[i].sexo << endl;
            cout << "Telefone: " << strPessoa[i].telefone << endl << endl << endl;

    }

    return 0;
}
