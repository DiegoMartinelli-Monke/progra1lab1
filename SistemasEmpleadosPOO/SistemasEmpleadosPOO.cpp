// SistemasEmpleadosPOO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Empleado.h"
#include <iostream>

int main()
{
    Empleado empleado1("Ana", "Soporte");
    Empleado empleado2("Carlos", "Desarrollo");

    empleado1.mostrarInformacion();
    empleado2.mostrarInformacion();
    empleado1.setArea("Ciberseguridad");

    std::cout << "\nDespues de actualizar el area:\n";
    empleado1.mostrarInformacion();

    std::cout << "Consulta mediante getter: "
        << empleado1.getNombre() << '\n';
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
