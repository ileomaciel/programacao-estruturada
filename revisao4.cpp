#include <iostream>
#include <locale>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int n = 5; 
    float vetor1[n], vetor2[n], resultado[n];

    for (int i = 0; i < 5; i++) {
        cout << "Digite a nota da P1 do aluno " << i + 1 << ": ";
        cin >> vetor1[i];
        cout << "Digite a nota da P2 do aluno " << i + 1 << ": ";
        cin >> vetor2[i];
        cout << endl;
        
    }
    
    cout << "\nSituação dos alunos: " << endl;
    for (int i = 0; i < n; i++) {
        resultado[i] = (vetor1[i] + vetor2[i]) / 2;
        cout << "Aluno: " << i + 1 << " P1 = " << vetor1[i] << " P2 = " << vetor2[i] << 
        "\nMédia = " << resultado[i] << endl;
            if(resultado[i] >= 6){
                cout << "Aprovado!!!" << endl << endl;
            }else{
                cout << "Reprovado!!!" << endl << endl;
            }
    }

    return 0;
}
