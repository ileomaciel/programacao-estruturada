#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 0, num;

    cout << "Informe um número: ";
    cin >> num;

    do{
        cout << "Informe um número: ";
        cin >> num;
        i = i + 1;

    }while(num != 0);
        cout << "A quantidade de números digitados foram " << i << endl;
    return 0;
}
