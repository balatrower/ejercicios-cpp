#include <iostream>

int main() {
    int numero1 = 1.5; //copy initialization, narrowing conversion habilitado pero al tratar warnings como errores el compilador da error

    int numero2 ( 2.2 ); //direct initialization, narrowing conversion habilitado pero al tratar warnings como errores el compilador da error

    int numero3 = { 3 }; //copy list initialization (raramente usado), narrowing conversion no habilitado 

    int numero4 { 4 }; //direct list initialization (el que se usara), narrowing conversion no habilitado

    std::cout << numero1 << "\n" << numero2 << "\n" << numero3 << "\n"  << numero4;

    return 0;
}
