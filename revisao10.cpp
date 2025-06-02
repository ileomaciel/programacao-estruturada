#include <iostream>
#include <cstring>
#include <locale>
#include <fstream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    int NANIMAL;

    cout << "Quantos animais você deseja cadastrar?: ";
    cin >> NANIMAL;
    cin.ignore();

    struct EstruturaAnimal {
        char nome[50];
        char especie[50];
        char raca[50];
        char sexo;
        int idade;
        char nomedono[50];
        char rg[20];
        char telefone[20];
    };

    EstruturaAnimal strAnimal[NANIMAL];

    for (int i = 0; i < NANIMAL; i++) {
        cout << "\nCadastro do PET #" << i + 1 << endl;
        cout << "Informe o Nome do PET: ";
        cin.getline(strAnimal[i].nome, 50);
        cout << "Informe a Espécie do PET: ";
        cin.getline(strAnimal[i].especie, 50);
        cout << "Informe a Raça do PET: ";
        cin.getline(strAnimal[i].raca, 50);
        cout << "Informe o Sexo (M/F): ";
        cin >> strAnimal[i].sexo;
        cin.ignore();
        cout << "Informe a Idade do PET: ";
        cin >> strAnimal[i].idade;
        cin.ignore();
        cout << "Informe o Nome do DONO: ";
        cin.getline(strAnimal[i].nomedono, 50);
        cout << "Informe o RG do DONO: ";
        cin.getline(strAnimal[i].rg, 20);
        cout << "Informe o Telefone: ";
        cin.getline(strAnimal[i].telefone, 20);

        cout << endl;
    }

    ofstream arquivo;
    arquivo.open("arquivo.txt");

    cout << "\nANIMAIS Cadastrados com Sucesso!!!\n" << endl;

    for (int i = 0; i < NANIMAL; i++) {
        cout << "PET #" << (i + 1) << endl;
        cout << "Nome: " << strAnimal[i].nome << endl;
        cout << "Espécie: " << strAnimal[i].especie << endl;
        cout << "Raça: " << strAnimal[i].raca << endl;
        cout << "Sexo: " << strAnimal[i].sexo << endl;
        cout << "Idade: " << strAnimal[i].idade << endl;
        cout << "Nome do DONO: " << strAnimal[i].nomedono << endl;
        cout << "RG do DONO: " << strAnimal[i].rg << endl;
        cout << "Telefone: " << strAnimal[i].telefone << endl << endl;

        arquivo << "PET #" << (i + 1) << endl;
        arquivo << "Nome: " << strAnimal[i].nome << endl;
        arquivo << "Espécie: " << strAnimal[i].especie << endl;
        arquivo << "Raça: " << strAnimal[i].raca << endl;
        arquivo << "Sexo: " << strAnimal[i].sexo << endl;
        arquivo << "Idade: " << strAnimal[i].idade << endl;
        arquivo << "Nome do DONO: " << strAnimal[i].nomedono << endl;
        arquivo << "RG do DONO: " << strAnimal[i].rg << endl;
        arquivo << "Telefone: " << strAnimal[i].telefone << endl << endl;
    }

    arquivo.close();

    cout << "Arquivo criado com Sucesso!" << endl;

    return 0;
}
