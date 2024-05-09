#include <iostream>
#include <string>
using namespace std;


void ingresardatos();
int suma(int a,int b);
float resta(float a,float b);
double division(int a,float b);
bool verificacion(float a,float b);

int main(){
    ingresardatos();
    return 0;
}

void ingresardatos(){
    int x,a,b;
    string mensaje;
    mensaje = "Bienvenido al menu de operaciones\n";
    mensaje+="1-) Sumar\n";
    mensaje+="2-) Restar\n";
    mensaje+="5-) Multiplicar\n";
    mensaje+="4-) Dividir\n";
    
    cout<<mensaje;
    cin>>x;  
}




