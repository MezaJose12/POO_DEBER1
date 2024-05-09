#include <iostream>
#include <string>
using namespace std;


void ingresardatos();
int suma(int a,int b);
float resta(float a,float b);
float Multiplicar(int a,float b);
double division(int a,float b);
bool verificacion(float a,float b);

int main(){
    do{
        ingresardatos();
    }while(true);
    return 0;
}

void ingresardatos(){
    int x,a,b;
    int rs;
    float rr;
    string mensaje;
    mensaje = "\nBienvenido al menu de operaciones\n";
    mensaje+="1-) Sumar\n";
    mensaje+="2-) Restar\n";
    mensaje+="3-) Multiplicar\n";
    mensaje+="4-) Dividir\n";
    mensaje+="5-) Verificar\n";
    
    cout<<mensaje;
    cin>>x;
        switch (x)
    {
    case 1:
        cout<<"Ingrese 2 numeros a sumar:"<<endl;
        cout<<"Ingrese numero 1:";
        cin>>a;
        cout<<"Ingrese numero 2:";
        cin>>b;
        rs=suma(a,b);
        cout<<"La suma es:"<<rs;
        break;      
    case 2:
        cout<<"Ingrese 2 numeros a restar:"<<endl;
        cout<<"Ingrese numero 1:";
        cin>>a;
        cout<<"Ingrese numero 2:";
        cin>>b;
        rr=resta(a,b);
        cout<<"La resta es:"<<rr;
        break;
    case 3:
        float ml;
        cout<<"Multiplicar suma por resta:"<<endl;
        ml=Multiplicar(rs,rr);
        cout<<"Resultado de la operacion:["<<rs<<"]*["<<rr<<"]="<<ml<<endl;
        break;
    case 6:
        cout<<"Saliendo:";
        exit (0);
    default:
        break;
    }

    
}

int suma (int a,int b){
    return a+b;
}

float resta(float a,float b){
    return a-b;
}

float Multiplicar(int a,float b){
    return a*b;
}
