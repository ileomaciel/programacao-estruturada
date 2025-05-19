#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media;

    cout << "Digite a média do aluno: ";
    cin >> media;

    if(media >= 0 && media <= 10){
        if(media >=6){
            cout << "Aluno foi aprovado" << endl;

            }else{
            cout << "Aluno foi  reprovado" << endl;
            }
                }else{
                    cout << "A média é inválida" << endl;
                }
    return 0;
}
