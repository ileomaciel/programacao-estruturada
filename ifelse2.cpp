#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsSaoPaulo, golsPalmeiras;

    cout << "***Placar São Paulo x Palmeiras ***" << endl;

    cout << "Digite a quantidade de gols do São Paulo: ";
    cin >> golsSaoPaulo;

    cout << "Digite a quantidade de gols do Palmeiras: ";
    cin >> golsPalmeiras;

    if (golsSaoPaulo > golsPalmeiras){
        cout << "\nA festa é Tricolor" << endl;
    }
    else{
        cout << "\nA festa é do Palmeiras" << endl;

    }
    return 0;
}
