#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 50;

    while(i > 0){
        cout << "Contador = " << i << endl;
        i = i - 1;
    }
    cout << "\nAcabou!!!" << endl;

    return 0;
}
