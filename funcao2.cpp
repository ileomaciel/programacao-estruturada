#include <iostream>
#include <locale>

using namespace std;

    void oi(void){
        cout << "Oi, esse é o primeiro exemplo de def. de FUNCÇÃO em C++." << endl;
        cout << "Ainda veremos outros exemplos." << endl << endl;
    }

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1;

    while(i <= 5){
        oi();
        i = i+1;
    }

    return 0;
}
