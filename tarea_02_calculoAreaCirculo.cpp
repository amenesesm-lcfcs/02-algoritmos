
 // =============================================================================
 // CLEU
 // Programa: Licenciatura en cómputo forense y ciberseguridad
 // Asignatura: Algoritmos
 // Programa: Cálculo del área de un círculo
 // Alumno: Meneses Matilde Alfredo
 // Fecha: 14 de noviembre de 2026
 // =============================================================================

#include <iostream>
using namespace std;

int main()
{
    // Declaramos dos variables: radio y área
    float radio, area;
    // Leemos el radio del círculo
    cout << "Introduce el radio del círculo: ";
    cin >> radio;
    // Realizamos el cálculo del área del círculo
    area = 3.1416 * radio * radio;
    // Mostramos en pantalla el resultado del cálculo
    cout << "El área del círculo es: "
         << area << endl;

    return 0;
}
