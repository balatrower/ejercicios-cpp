#include <iostream>

int main() {
    int x{}; // si se usa un double (4.3) la parte decimal se dropea
    std::cin >> x; // si se pone 4.3 solo se extrae la parte etera (porque para en el .) y .3 se quedaria en el buffer 

    std::cout << "Si pones un cracter o string en vez de un integer fallara la extraccion y x se inicializara a 0\n";
    std::cout << "fallaran previas extracciones hasta que no se flushee el buffer de std::cin\n";

    int y{};
    std::cin >> y; // esto noejecutara ya que no se ha flusheado

    std::cout << "Valor de x: " << x << " Y valor de y: " << y << std::endl;

    return 0;
}
