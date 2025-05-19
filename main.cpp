#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    if(idade >= 18){
        cout << "Você é maior de idade";
    }
    else{
        cout << "Você é menor de idade" << endl;
    }
    return 0;
}
