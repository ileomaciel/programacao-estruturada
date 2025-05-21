#include <iostream>

using namespace std;

int qu(int n){
    return n * n;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int lado1, lado2, lado3;
        cout << "Digite três nº inteiros: ";
        cin >> lado1 >> lado2 >> lado3;

    if(lado1 > 0 && lado2 > 0 && lado3 > 0 &&
       (qu(lado1) + qu(lado2) == qu(lado3) ||
        qu(lado2) + qu(lado3) == qu(lado1) ||
        qu(lado3) + qu(lado1) == qu(lado2))){

        cout << lado1 << " " << lado2 << " " << lado3 << " podem formar um triângulo reto\n";
    }
        cout << lado1 << " " << lado2 << " " << lado3 << " NÃO podem formar um triângulo reto\n";

    return 0;
}
