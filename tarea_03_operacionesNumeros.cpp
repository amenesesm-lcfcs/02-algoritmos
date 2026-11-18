

 // =============================================================================
 // CLEU
 // Programa: Licenciatura en cómputo forense y ciberseguridad
 // Asignatura: Algoritmos
 // Programa: Operaciones aritméticas con dos números
 // Alumno: Meneses Matilde Alfredo
 // Fecha: 14 de noviembre de 2026
 // =============================================================================

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables para los números y los resultados
    float numero1, numero2, suma, producto, diferencia, cociente;
    // Leemos el primer número
    cout << "Introduce el primer número: ";
    cin >> numero1;
    // Leemos el segundo número
    cout << "Introduce el segundo número: ";
    cin >> numero2;
    // Realizamos las operaciones aritméticas
    suma = numero1 + numero2;
    producto = numero1 * numero2;
    diferencia = numero1 - numero2;
    // No se valida que el divisor sea distinto de cero
    cociente = numero1 / numero2;
    // Mostramos en pantalla los resultados
    cout << "La suma es: " << suma << endl;
    cout << "El producto es: " << producto << endl;
    cout << "La diferencia es: " << diferencia << endl;
    cout << "El cociente es: " << cociente << endl;

    return 0;
}
