//Angelyn Judith Diaz Zece�a 
#include <iostream> //Aqui podemos ver que se utilizan la biblioteca para entrada y salida de datos
#include <fstream> //Aqui hay una biblioteca que sirve para el manejo de archivos adecuados
#include <string>
#include <sstream>

using namespace std;

struct Empleado { 
    string nombre;
    string apellido;
    int edad;
    double salario;
};

// Aqui se muestra la informaci�n de un empleado
void mostrarEmpleado(const Empleado& empleado) {
    cout << "Nombre: " << empleado.nombre << endl;
    cout << "Apellido: " << empleado.apellido << endl;
    cout << "Edad: " << empleado.edad << endl;
    cout << "Salario: " << empleado.salario << endl;
}

// Aqui se busca el empleado por nombre completo en el archivo
bool buscarEmpleado(const string& nombreCompleto) {
    ifstream archivo("empleados.txt");
    if (!archivo.is_open()) { // Aqui verifica si el archivo est� abierto
        cout << "Error al abrir el archivo empleados.txt" << endl;
        return false;
    }

    string linea;
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        Empleado empleado;
        ss >> empleado.nombre >> empleado.apellido >> empleado.edad >> empleado.salario;
        string nombreCompletoEmpleado = empleado.nombre + " " + empleado.apellido;
        if (nombreCompletoEmpleado == nombreCompleto) {
            mostrarEmpleado(empleado);
            archivo.close();
            return true;
        }
    }
    //Aqui muestra al usuario que el archivo no se encontr�
    cout << "Empleado no encontrado" << endl;
    archivo.close();
    return false;
}

int main() {
    cout << "------Hola personita, bienvenido al sistema de consulta de empleados------" << endl; //Aqui da la bienvenida al usuario. 

    string nombreCompleto;
    do {
        cout << "Ingrese el nombre completo del empleado a buscar  e ingrese 'salir' para terminar: ";
        getline(cin, nombreCompleto);

        if (nombreCompleto != "salir") {
            buscarEmpleado(nombreCompleto);
        }
    } while (nombreCompleto != "salir");


    return 0;
}
//significa que en esta parte el programa ha sido ejecutado correctamente. 