//Angelyn Judith Diaz Zeceña
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Empleado { //Aqui podemos ver que se utiliza una clase llamada empleado
private:
    string nombre;
    string apellido;
    int edad;
    double salario;

public:
    //  Aqui hay un Constructor
    Empleado() {}

    // Aqui se utilizan métodos para establecer los valores de los atributos
    void setNombre(const string& nombre) {
        this->nombre = nombre;
    }

    void setApellido(const string& apellido) {
        this->apellido = apellido;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setSalario(double salario) {
        this->salario = salario;
    }

    // Métodos para obtener los valores de los atributos
    string getNombre() const {
        return nombre;
    }

    string getApellido() const {
        return apellido;
    }

    int getEdad() const {
        return edad;
    }

    double getSalario() const {
        return salario;
    }

    void imprimirDatos() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Salario: " << salario << endl;
    }
};

int main() {
    cout << "-----Hola personita, bienvenido al sistema de registro de empleados-----" << endl;

    int numEmpleados;
    cout << "Ingrese el número de empleados: ";
    cin >> numEmpleados;

   
    cin.ignore();

    Empleado empleados[numEmpleados];

    // Aui se Solicita y almacena los datos de cada empleado
    for (int i = 0; i < numEmpleados; ++i) {
        Empleado empleado;
        string nombre, apellido;
        int edad;
        double salario;

        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        getline(cin, nombre);
        empleado.setNombre(nombre);

        cout << "Ingrese el apellido del empleado " << i + 1 << ": ";
        getline(cin, apellido);
        empleado.setApellido(apellido);

        cout << "Ingrese la edad del empleado " << i + 1 << ": ";
        cin >> edad;
        empleado.setEdad(edad);

        cout << "Ingrese el salario del empleado " << i + 1 << ": ";
        cin >> salario;
        empleado.setSalario(salario);

        // aqui se almacenan el empleado en el arreglo
        empleados[i] = empleado;

        cin.ignore();
    }

    // Aquis se escriben los datos de los empleados en un archivo
    ofstream archivo("empleados.txt");
    if (archivo.is_open()) {
        for (int i = 0; i < numEmpleados; ++i) {
            archivo << empleados[i].getNombre() << " "
                << empleados[i].getApellido() << " "
                << empleados[i].getEdad() << " "
                << empleados[i].getSalario() << endl;
        }
        archivo.close();
        cout << "Los datos de los empleados se han guardado en el archivo empleados.txt" << endl;
    }
    else {
        cout << "Error al abrir el archivo empleados.txt" << endl;
    }

    return 0;
}
//aqui finaliza el codigo