#include <iostream>
#include <locale>
#define n 10

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[n] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "Os valores do vetor são:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " - ";
    }
    
    cout << endl << endl;
    
    cout << "Os valores do vetor na ordem inversa são: " << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << vetor[i] << " - "; 
    }

    return 0;
}
