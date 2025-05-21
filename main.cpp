#include <iostream>
#include <locale>

using namespace std;

int acheMaior(int a, int b, int c){

int maior;
maior = a;

if(b > maior){
    maior = b;
}else{
    if (c > maior){
        maior = c;
        }
    }
    return maior;
}


int main(){

    setlocale(LC_ALL, "Portuguese");

    int primeiro, segundo, terceiro, x, y, z, maior_1, maior_2;

    cout << "Digite o primeiro conjunto de três números inteiros: ";
    cin >> primeiro >> segundo >> terceiro;

    maior_1 = acheMaior(primeiro, segundo, terceiro);

    cout << "Digite o segundo conjunto de três números inteiros: ";
    cin >> x >> y >> z;

    maior_2 = acheMaior(x, y, z);

    cout << endl << maior_1 << " + " << maior_2 << " = " << maior_1 + maior_2 << endl;

    return 0;
}
