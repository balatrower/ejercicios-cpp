#include <iostream>

int main() {
    int numero = 1.5; //copy initialization, narrowing conversion habilitado

    int numero2 ( 2.5 ); //direct initialization, narrowing conversion habilitado

    int numero3 = { 3.5 }; //copy list initialization (raramente usado), narrowing conversion no habilitado 

    int numero4 { 4.5 }; //direct list initialization (el que se usara), narrowing conversion no habilitado
}
