#include <iostream>
using namespace std;
#include <string>

int main() {

    string registroAlumnos[3];
    string registroAlumnos[0] = {"Juan Perez", "Masculino", 1.75, 16};
    registroAlumnos[1] = {"Pedro Gomez", "Masculino", 1.60, 17};
    registroAlumnos[2] = {"Luis Ramirez", "Masculino", 1.80, 18};

    // Registro de estudiante para el equipo de baloncesto
    string genero,
    float altura;
    int edad;

    // Lectura de datos
    cout << "Ingrese la edad del estudiante: ";
    cin >> edad;
    cout << "Ingrese el género del estudiante (M/F): ";
    cin >> genero;
    cout << "Ingrese la altura del estudiante (en metros): ";
    cin >> altura;

    // Verificación de requisitos
    bool estudiante_valido = true;
    if (genero != "M") {
        cout << "Rechazado: el estudiante no es de género masculino." << endl;
        estudiante_valido = false;
    }
    if (altura <= 1.5) {
        cout << "Rechazado: el estudiante no mide más de 1.5m de altura." << endl;
        estudiante_valido = false;
    }
    if (edad >= 17) {
        cout << "Rechazado: el estudiante es mayor de 17 años." << endl;
        estudiante_valido = false;
    }


    string registrado [2] = ;
    if (id != id_registrado) {
        cout << "Este estudiante no existe." << endl;
        estudiante_valido = false;
    }

    // Respuesta final
    if (estudiante_valido) {
        cout << "Inscrito." << endl;
    } else {
        cout << "Rechazado." << endl;
    }

    return 0;
}
