#include <iostream>

void doNothing(int&) {
}

int main() {
    int x;

    doNothing(x);

    std::cout << x; 
    // esto deberia de printear la variable x con su valor basura que tiene, pero al tener de opcion de compilador de tratar avisos como errores
    // pues no puedo ejecutar este codigo y no puedo ver el valor baura que tiene.
    // edit, con esto si se puede ver el valor basura (sale 0 XD)
}
