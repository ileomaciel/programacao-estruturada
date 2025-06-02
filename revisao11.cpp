#include <iostream>
#include <locale>

using namespace std;

float imc(float peso, float altura){
    return (peso / (altura * altura));
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    float peso, altura;
        cout << "Programa para calcular o IMC de uma pessoa " << endl << endl;
        cout << "Digite o peso e Kilos: ";
        cin >> peso;
        cout << "Digite a altura em Metros: ";
        cin >> altura;
        
    cout << "\nO IMC é: " << imc(peso, altura) << endl;
    
    return 0;
}
