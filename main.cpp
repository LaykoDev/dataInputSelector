#include <iostream>
#include <string.h>
#include <conio.h>

template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
    int dato;
    std::cout << "Introduce el tipo de dato que quieras dar.\n1-. Entero\n2-. Flotante\n3-. Caracter\n4-. Doble\n5-. Salir\n \n";
    std::cin >> dato;

    switch(dato){
        case 1:
            int numero1;
            std::cout << "\nIntroduce un numero entero: ";
            std::cin >> numero1;
            despliegue(numero1);
            break;
        case 2:
            float numero2;
            std::cout << "\nIntroduce un numero flotante: ";
            std::cin >> numero2;
            despliegue(numero2);
            break;
        case 3:
            char texto2;
            std::cout << "\nIntroduce un caracter: ";
            std::cin >> texto2;
            despliegue(texto2);
            break;
        case 4:
            double numero3;
            std::cout << "\nIntroduce un numero doble: ";
            std::cin >> numero3;
            despliegue(numero3 );
            break;
        case 5:
            break;
        default:
            std::cout << "No has introducido un numero correcto. (1 - 5)";
    }

    getch();
    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
    std::cout << "El valor introducido es " << dato << ".";
}