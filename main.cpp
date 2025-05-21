#include <iostream>
#include <cstring>

using namespace std;

int main(){

    int NALUNO = 3;

    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoIngresso;
    } strAluno[NALUNO];

    int i;
    for(i = 0; i < NALUNO; i++){
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe a matricula do aluno: ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe o Ano de Ingresso do aluno: ";
        cin >> strAluno[i].anoIngresso;
        cout << endl << endl;
        fflush(stdin);

    }
    cout << "\nAlunos Cadastrados com Sucesso!\n" << endl;

        for(i = 0; i < NALUNO; i++){
            cout << "Aluno: " << strAluno[i].nome << endl;
            cout << "Matricula: " << strAluno[i].matricula << endl;
            cout << "Ano de Ingresso: " << strAluno[i].anoIngresso << endl << endl << endl;
    }

    return 0;
}
