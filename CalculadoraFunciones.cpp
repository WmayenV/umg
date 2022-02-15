#include<iostream>

using namespace std;

int sum(int num1, int num2)
{
    return num1 + num2;
}
int res(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int divi(int num1, int num2)
{
    return num1 / num2;
}
int main()
{
    int num1, num2;
    cout<< "Ingrese primer numero"<<endl;
    cin>> num1;
    cout<<endl;
    cout<<"Ingrese segundo numero"<<endl;
    cin>> num2;

    int suma = sum(num1,num2);
    int resta = res(num1, num2);
    int multiplicacion = mul(num1, num2);
    int division = divi(num1, num2);

    cout <<"La suma de los numeros es:"<< suma<<endl;
    cout<< endl;
    cout <<"La resta de los numeros es:"<< resta<<endl;
    cout <<endl;
    cout <<"La multiplicacion de los numero es:"<<multiplicacion<<endl;
    cout <<endl;
    cout <<"La division de los numeos es:"<<division<<endl;
    return 0;
}
