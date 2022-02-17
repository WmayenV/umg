#include <iostream>
using namespace std;
void drawMap(int posX,int posY,char gameMap[10][10]){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(posX==j && posY==i)
        {
            cout<<"R";
        }
      else
      {
            cout<<gameMap[i][j];
      }
    }
    cout<<endl;
  }
}

int main(){
  int posX=3;
  int posY=3;
  char map[10][10]={{'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'},
		  {'0','0','0','0','0','0','0','0','0','0'}};
  char teclado;
  bool gameOver = false;
  drawMap(posX,posY,map);
  while(!gameOver)
  {
    cout << "Bienvenido(a)"  << endl;
    cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
    cout << "Controles Teclas --> p(Salida)" << endl;
    cin >> teclado;
    switch (teclado)
    {
        case 'a':
            if (posX>0)
            {
                posX-=1;
            }
            break;
        case 'd':
            if(posX<9)
            {
                posX+=1;
            }
            break;
        case 'w':
            if (posY>0)
            {
                posY-=1;
            }
            break;
        case 's':
            if(posY<9)
            {
                posY+=1;
            }
            break;
        case 'p':
            gameOver=true;
        default:
            break;
    }
  drawMap(posX,posY,map);
  }
 return 0;
}
