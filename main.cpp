/*
Agregar un menú con 3 opciones:
    Operaciones básicas entre 2 números
    Cálculo del promedio
    Cálculo del factorial de un número
*/

#include <iostream>
#include <cmath>

using namespace std;


double division(double a, double b) {
    if (b != 0)
        return a / b;
    
    else {
        cout << "Error: No se puede dividir por cero." << endl;
        return 999999.99;
    }
}

void Op_basicas(){
    double num1, num2;
        char operacion;

        cout << "Ingrese el primer numero: ";
        cin >> num1;

        cout << "Ingrese la operacion (+, -, *, /, ^, m): ";
        cin >> operacion;

        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        double resultado;

        switch (operacion) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                resultado = division(num1, num2);
                break;
            case '^':
                resultado = pow(num1,num2);
                break;
            case 'm':
                resultado = (num1 > num2) ? num1 : num2;
                break;
            default:
                cout << "Operación no valida." << endl;
        }

        cout << "Resultado: " << resultado << endl;

}

void promedio(){
    int array[5];
    cout << "Ingrese 5 numeros" << endl;
    cin >> array [0] >> array [1] >> array [2] >> array [3] >> array [4];

    double suma = 0;
    double resultado;
    for(int i : array){
        suma += i;
    }
    resultado = suma / 5;
    cout << "Resultado: " << resultado << endl;

}

void factorial(){
    cout << "Ingrese un numero: ";
    int numero;
    cin >> numero;
    int i = 1;
    int factorial = 1;
    if (numero < 0)
        cout << "Numero erroneo";
    else{
        while(i <= numero){
            factorial *= i;
            i++;
        }
        cout << "El factorial de " << numero << " es " << factorial;
    }

}

int main() {
    cout << "Bienvenido a la calculadora" << endl;
    cout << "Elija una opcion:" << endl
         << "1: Operaciones basicas entre 2 numeros" << endl
         << "2: Calculo del promedio" << endl
         << "3: Calculo del factorial de un numero" <<endl;
    int opcion;
    cin >> opcion;
    switch (opcion) {
            case 1:
                Op_basicas();
                break;
            case 2:
                promedio();
                break;
            case 3:
                factorial();
                break;
           
    }    

    return 0;
}
