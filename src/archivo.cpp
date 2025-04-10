#include <iostream> 
#include <string> 
#include <fstream> 
using namespace std;

int main(int argc, char const *argv[])
{
ofstream archivo("archivo.txt"); 

if(!archivo.is_open()) 
{
cerr << "Error al abrir el archivo para la escritura" << endl;
return 1;
}

cout << "Escribiendo en el archivo..." << endl;
archivo << "Hola, mundo!" << endl; 
archivo << "Linea 1" << endl;
archivo << "Linea 2" << endl;
archivo << "Linea 3" << endl;
archivo << "Linea 4" << endl;
archivo << "Linea 5" << endl;


archivo.close();


ifstream archivoLectura("archivo.txt");
if(!archivoLectura.is_open())
{
    cerr << "Error al abrir el archivo para lectura." << endl;
    return 1;
}

cout << "Leyendo del archivo..." << endl;
string linea;
while(getline(archivoLectura, linea))
{
    cout << linea << endl;
}

archivoLectura.close();

    return 0;
}