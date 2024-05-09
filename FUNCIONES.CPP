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
        switch (x)
    {
    case 1:
        int rs;
        cout<<"Ingrese 2 numeros a sumar:"<<endl;
        cout<<"Ingrese numero 1:";
        cin>>a;
        cout<<"Ingrese numero 2:";
        cin>>b;
        rs=suma(a,b);
        cout<<"La suma es:"<<rs;
        break;      
    default:
        break;
    }
}

int suma (int a,int b){
    return a+b;
}




