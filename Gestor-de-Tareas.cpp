#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    do {
        cout << "1. Agregar tarea\n2. Mostrar tareas\n3. Salir\nElige una opción: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Ingresa la tarea: ";
                getline(cin, task);
                tasks.push_back(task);
                break;
            case 2:
                cout << "Lista de tareas:\n";
                for (int i = 0; i < tasks.size(); ++i) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
                break;
            case 3:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida\n";
                break;
        }
    } while (choice != 3);

    return 0;
}
