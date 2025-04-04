#include<iostream>
using namespace std;

int main(){
    int a = 74;
    int b =185;
    int *direccion =&a;

    cout << "int:"<< sizeof(int)<<" bytes" <<endl;
    cout << "char:"<< sizeof(char)<<" bytes" <<endl;
    cout << "float:"<< sizeof(float)<<" bytes" <<endl;
    cout << "double:"<< sizeof(double)<<" bytes" <<endl;
    cout << "bool:"<< sizeof(bool)<<" bytes" <<endl;
    cout<< "direccion:"<<direccion<<endl;
    cout<< "valor contenido en la direccion de memoria del apuntador direccion:" <<*direccion<<endl;
    cout<< "direccion del puntero: " <<sizeof(direccion)<<endl; 
    cout<< "direccion de memoria de la variable direccion: " <<&direccion <<endl;

    cout << "a:" << &a<< endl;
    cout << "b:" <<&b<< endl;
    return 0;

 }
