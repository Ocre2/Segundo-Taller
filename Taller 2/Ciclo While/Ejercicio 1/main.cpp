#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Alumno
struct Alumno {
    string Nombre;
    string Apellidos;
    int ID;
    int Edad;
    string Genero;
    string NombreAcudiente;
    string ApellidoAcudiente;
    int IDAcudiente;
};

int main() {
    const int MAX_CUPOS = 200; // Límite de cupos disponibles
    int contadorCupos = MAX_CUPOS; // Contador de cupos disponibles
    Alumno alumnos[MAX_CUPOS]; // Vector para almacenar a los alumnos registrados
    int contadorAlumnos = 0; // Contador de alumnos registrados

    cout << "Bienvenido al registro de alumnos" << endl;

    while (contadorCupos > 0) {
        cout << "Registro de Alumno" << endl;

        // Crear una nueva estructura Alumno
        Alumno nuevoAlumno;

        // Solicitar al usuario los datos del alumno
        cout << "Nombre: ";
        cin >> nuevoAlumno.Nombre;

        cout << "Apellidos: ";
        cin >> nuevoAlumno.Apellidos;

        cout << "ID: ";
        cin >> nuevoAlumno.ID;

        cout << "Edad: ";
        cin >> nuevoAlumno.Edad;

        cout << "Género: ";
        cin >> nuevoAlumno.Genero;

        cout << "Nombre del Acudiente: ";
        cin >> nuevoAlumno.NombreAcudiente;

        cout << "Apellido del Acudiente: ";
        cin >> nuevoAlumno.ApellidoAcudiente;

        cout << "ID del Acudiente: ";
        cin >> nuevoAlumno.IDAcudiente;

        // Agregar el nuevo alumno al vector de alumnos
        alumnos[contadorAlumnos] = nuevoAlumno;
        contadorAlumnos++;

        // Restar 1 al contador de cupos disponibles
        contadorCupos--;

        cout << "Registro exitoso." << endl;
        cout << "Cupos disponibles: " << contadorCupos << endl;

        // Preguntar al usuario si desea registrar otro alumno
        char respuesta;
        cout << "¿Desea registrar otro alumno? (S/N): ";
        cin >> respuesta;

        if (respuesta == 'N' || respuesta == 'n') {
            break; // Salir del ciclo while
        }
    }

    // Mostrar la lista de alumnos registrados
    cout << "Lista de Alumnos Registrados:" << endl;
    for (int i = 0; i < contadorAlumnos; i++) {
        cout << "Nombre: " << alumnos[i].Nombre << endl;
        cout << "Apellidos: " << alumnos[i].Apellidos << endl;
        cout << "ID: " << alumnos[i].ID << endl;
        cout << "Edad: " << alumnos[i].Edad << endl;
        cout << "Género: " << alumnos[i].Genero << endl;
        cout << "Nombre del Acudiente: " << alumnos[i].NombreAcudiente << endl;
        cout << "Apellido del Acudiente: " << alumnos[i].ApellidoAcudiente << endl;
        cout << "ID del Acudiente: " << alumnos[i].IDAcudiente << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}
