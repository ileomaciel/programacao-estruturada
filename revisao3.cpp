#include <iostream>
#include <locale>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int n = 10, vetor1[n], vetor2[n], resultado[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite o " << i + 1 << "º valor do VETOR 1: ";
        cin >> vetor1[i];
    }
    
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Digite o " << i + 1 << "º valor do VETOR 2: ";
        cin >> vetor2[i];
    }
    
    for (int i = 0; i < n; i++) {
        resultado[i] = vetor1[i] * vetor2[i];
    }
    
    cout << "\nOs valores digitados no VETOR 1 são: ";
    for (int i = 0; i < n; i++) {
        cout << vetor1[i] << " - ";
    }

    cout << "\nOs valores digitados no VETOR 2 são: ";
    for (int i = 0; i < n; i++) {
        cout << vetor2[i] << " - ";

    }

    cout << "\nOs valores dos vetores dos multiplicados são: ";
    for (int i = 0; i < n; i++) {
        cout << resultado[i] << " - ";
    }

    return 0;
}
