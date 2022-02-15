#include<iostream>
using namespace std;
int main()
{
    int CodCurso;
    int N;
    string Ncurso;
    cout <<"Cursos Asignados"<< endl;

    cout <<"9959 011 Fisica I"<< endl;
    cout <<"9959 012 Programacion I"<< endl;
    cout <<"9959 013 Calculo I"<< endl;
    cout <<"9959 014 Proceso Administrativo"<< endl;
    cout <<"9959 015 Derecho Informatico"<< endl;


    cout <<"Ingrese codigo de curso seguido del '9959' para ingresar nota al curso" << endl;
    cin >> CodCurso;

    switch(CodCurso)
    {
    case 1:
        NCurso = "Fisica I";
        break;
    case 2:
        Ncurso = "Programacion I";
        break;
    case 3:
        Ncurso = "Calculo I";
        break;
    case 4:
        Ncurso = "Proceso administrativo";
        break;
    case 5:
        Ncurso = "Derecho informatico";
        break;
        default:
            cout<<"Curso Invalido";


            return 0;
    }
    cout <<"Ingrese Su Nota"<< endl;
    cin>>N;
    if (N<60&N>=0){
        N=0;
    }
    else if (N>=60&N<75){
        N=1;
    }
    else if (N>=75&N<90){
        N=2;
    }
    else if (N>=90&N<100){
        N= 3;
    }
    else {
            cout<<"Nota No Valida"
            return 0;
    }
    switch(N)
    {
    case 0:
        cout<<"No Aprobo";
        break;
    case 1:
        cout<<"Aprobaste, Obtuviste Nota Aceptable";
        break;
    case 2:
        cout<<"Aprobaste, Obtuviste Buena Nota";
        break;
    case 3:
        cout<<"Aprobaste, Obtuviste Excelente Nota";
    }
    return 0;
}
