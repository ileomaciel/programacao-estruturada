#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    cout << "Digite o primeiro número: ";
    cin >> n1;

    cout << "Digite o segundo número: ";
    cin >> n2;

    if (n1 > n2){
        cout << "\nO maior número é: " << n1 << endl;
    }
    else{
        cout << "O maior número é: " << n2 << endl;
    }
    return 0;
}
