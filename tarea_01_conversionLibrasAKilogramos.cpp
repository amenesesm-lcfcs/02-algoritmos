// =============================================================================
// CLEU
// Programa: Licenciatura en cómputo forense y ciberseguridad
// Asignatura: Algoritmos
// Programa: Conversión de libras a kilogramos
// Alumno: Meneses Matilde Alfredo
// Fecha: 14 de noviembre de 2026
// =============================================================================

#include <iostream>
using namespace std;

int main()
{
    // Declramos dos variables: libras y kilogramos
    float libras, kilogramos;
    // Leemos la cantidad de libras
    cout << "Introduce el peso en libras: ";
    cin >> libras;
    // Realizamos el cálculo de libras a kilogramos
    kilogramos = libras * 0.45359237;
    // Mostramos en pantalla el resultado de la conversión
    cout << "El peso en kilogramos es: "
         << kilogramos << endl;

    return 0;
}
