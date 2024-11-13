
#include <iostream>
#include <array>
#include<string>
using namespace std;



int apuesta_numero(int aleatorio, int dinero,int dinero_apostado)
{
  
int apuesta;

cout << "introduzca el número al que quiere apostar\n";
cin >> apuesta;
while(apuesta > 36 || apuesta <= 0){
  cout << "error, introduzca de nuevo\n";
  cin >> apuesta;
}
if(aleatorio != 0){
  if(apuesta == aleatorio){

   dinero = dinero + dinero_apostado*35;
}else{

   dinero = dinero - dinero_apostado;
}
}else if (aleatorio == 0){
  dinero = 0;
}
return dinero;
}

int apuesta_color(int aleatorio,int dinero, int dinero_apostado){
  int color;

  cout << "elija color, rojo=1 negro=2\n";
  cin >> color;
  while(color > 2 || color < 1 ){
    cout << "ese color no es válido, introduzca otro\n";
    cin >> color;
  }

if(color == 2){
if(aleatorio != 0){
if(aleatorio %2 == 0){

  dinero = dinero + dinero_apostado*2;
}else{

  dinero = dinero - dinero_apostado;
}
}else if(aleatorio == 0){
  dinero = 0;
}

}
if(color == 1){
if(aleatorio %2 != 0){
  dinero = dinero + dinero_apostado*2;
}else{

  dinero = dinero - dinero_apostado;
}

}



return dinero;

}

int Banca(int banca,int dinero,int aleatorio){

if(aleatorio == 0){
  banca = banca + dinero;
}


return banca;
}


int main() {
int banca{0};

struct jugadores{
 int dinero{10};
 int apostar{0};
 int dinero_apostado{0};
 int ganado{0};
}j1,j2,j3,j4;

struct dinero{
  int dinero;
  int banca;
}d1,d2,d3,d4;


while(j1.dinero >=! 0 || j2.dinero >=! 0  || j3.dinero >=! 0 || j4.dinero >=! 0 ){

srand (time(NULL));

int APUESTA =  rand() % 37;

d1.dinero = j1.dinero; 
d2.dinero = j2.dinero; 
d3.dinero = j3.dinero; 
d4.dinero = j4.dinero; 


cout << "jugador 1 tiene: " << j1.dinero << "\n";
if(j1.dinero <= 0) cout << "el jugador 1 se quedo sin dinero\n";
cout << "jugador 2 tiene: " << j2.dinero<< "\n";
if(j2.dinero <= 0) cout << "el jugador 2 se quedo sin dinero\n";
cout << "jugador 3 tiene: " << j3.dinero<< "\n";
if(j3.dinero <= 0) cout << "el jugador 3 se quedo sin dinero\n";
cout << "jugador 4 tiene: " << j4.dinero<< "\n";
if(j4.dinero <= 0) cout << "el jugador 4 se quedo sin dinero\n";

std::cout << "\nCOMIENZAN LAS APUESTAS\n";

if(j1.dinero >=! 0){
cout << "¿jugador 1 le gustaría apostar?  si=1 no=2\n";
cin >> j1.apostar;
while(j1.apostar > 2 || j1.apostar < 1 ){
  cout << "respuesta no válida, intentelo otra vez\n";
  cin >> j1.apostar;
}
if(j1.apostar == 1){
cout << "introduzca el dinero que quiere apostar\n";
cin >> j1.dinero_apostado;
while(j1.dinero_apostado > j1.dinero || j1.dinero_apostado <= 0){
  cout<< "error, introduzca de nuevo\n";
  cin >> j1.dinero_apostado;
}
cout << "¿a número o color? número=1 color=2\n";
cin >> j1.apostar;
while(j1.apostar > 2 || j1.apostar < 1 ){
  cout << "respuesta no válida, intentelo otra vez\n";
  cin >> j1.apostar;
}
if(j1.apostar == 1){
  j1.dinero = apuesta_numero(APUESTA , j1.dinero,j1.dinero_apostado);
  banca = Banca(banca,d1.dinero,APUESTA);

  }else if(j1.apostar == 2){
  j1.dinero = apuesta_color(APUESTA,j1.dinero,j1.dinero_apostado);
  banca = Banca(banca,d1.dinero,APUESTA);
  
  }
}else if(j1.apostar ==2){
  cout<< "entonces espere al siguiente turno\n";
}
}

if(j2.dinero >=! 0){
  cout << "¿jugador 2 le gustaría apostar?  si=1 no=2\n";
cin >> j2.apostar;
while(j2.apostar > 2 || j2.apostar < 1 ){
  cout << "respuesta no válida, intentelo otra vez\n";
  cin >> j2.apostar;
}
if(j2.apostar == 1){
  cout << "introduzca el dinero que quiere apostar\n";
cin >> j2.dinero_apostado;
while(j2.dinero_apostado > j2.dinero || j2.dinero_apostado <= 0){
  cout<< "error, introduzca de nuevo\n";
  cin >> j2.dinero_apostado;
}
cout << "¿a número o color? número=1 color=2\n";
cin >> j2.apostar;
while(j2.apostar > 2 || j2.apostar < 1 ){
  cout << "respuesta no válida, intentelo otra vez\n";
  cin >> j2.apostar;
}
if(j2.apostar == 1){
  j2.dinero = apuesta_numero(APUESTA , j2.dinero,j2.dinero_apostado);
   banca = Banca(banca,d2.dinero,APUESTA);
  }else if(j2.apostar == 2){
  j2.dinero = apuesta_color(APUESTA,j2.dinero,j2.dinero_apostado);
  banca = Banca(banca,d2.dinero,APUESTA);
  }
}else if(j2.apostar ==2){
  cout<< "entonces espere al siguiente turno\n";
}
}



if(j3.dinero >=! 0){
cout << "¿jugador 3 le gustaría apostar?  si=1 no=2\n";
cin >> j3.apostar;
while(j3.apostar > 2 || j3.apostar < 1 ){
  cout << "respuesta no válida, intentelo otra vez\n";
  cin >> j3.apostar;
}
if(j3.apostar == 1){
cout << "introduzca el dinero que quiere apostar\n";
cin >> j3.dinero_apostado;
while(j3.dinero_apostado > j3.dinero || j3.dinero_apostado <= 0){
  cout<< "error, introduzca de nuevo\n";
  cin >> j3.dinero_apostado;
}
cout << "¿a número o color? número=1 color=2\n";
cin >> j3.apostar;
while(j3.apostar > 2 || j3.apostar < 1 ){
  cout << "respuesta no válida, intentelo otra vez\n";
  cin >> j3.apostar;
}
if(j3.apostar == 1){
  j3.dinero = apuesta_numero(APUESTA , j3.dinero,j3.dinero_apostado);
  banca = Banca(banca,d3.dinero,APUESTA);
  }else if(j3.apostar == 2){
  j3.dinero = apuesta_color(APUESTA,j3.dinero,j3.dinero_apostado);
  banca = Banca(banca,d3.dinero,APUESTA);
  }
}else if(j3.apostar ==2){
  cout<< "entonces espere al siguiente turno\n";
}

}

if(j4.dinero >=! 0){
cout << "¿jugador 4 le gustaría apostar?  si=1 no=2\n";
cin >> j4.apostar;
while(j4.apostar > 2 || j4.apostar < 1 ){
  cout << "respuesta no válida, intentelo otra vez\n";
  cin >> j4.apostar;
}
if(j4.apostar == 1){
cout << "introduzca el dinero que quiere apostar\n";
cin >> j4.dinero_apostado;
while(j4.dinero_apostado > j4.dinero || j4.dinero_apostado <= 0){
  cout<< "error, introduzca de nuevo\n";
  cin >> j4.dinero_apostado;
}
cout << "¿a número o color? número=1 color=2\n";
cin >> j4.apostar;
while(j4.apostar > 2 || j4.apostar < 1 ){
  cout << "respuesta no válida, intentelo otra vez\n";
  cin >> j4.apostar;
}
if(j4.apostar == 1){
  j4.dinero = apuesta_numero(APUESTA , j4.dinero,j4.dinero_apostado);
  banca = Banca(banca,d4.dinero,APUESTA);
  }else if(j4.apostar == 2){
  j4.dinero = apuesta_color(APUESTA,j4.dinero,j4.dinero_apostado);
  banca = Banca(banca,d4.dinero,APUESTA);
 
  }
}else if(j4.apostar ==2){
  cout<< "entonces espere al siguiente turno\n";
}

}
cout << "\nel número que salió es: " << APUESTA << "\n\n";
cout << "este es el dinero actual de los jugadores\n";
cout << "jugador 1: " << j1.dinero <<"\n"; 
if(d1.dinero < j1.dinero){
  j1.ganado = j1.dinero - d1.dinero;
  cout << "el jugador 1 ganó: " << j1.ganado<< "\n";
}else if(d1.dinero > j1.dinero){
   cout << "el jugafor 1 perdió: "  << j1.dinero_apostado << "\n"; 
   if(APUESTA != 0) banca = banca + j1.dinero_apostado;
} 
cout << "jugador 2: " << j2.dinero <<"\n";
if(d2.dinero < j2.dinero){
   j2.ganado = j2.dinero - d2.dinero;
  cout <<"el jugador 2 ganó: " << j2.dinero_apostado << "\n";
}else if(d2.dinero > j2.dinero){
  cout << "el jugador 2 perdió: " << j2.dinero_apostado << "\n";
  if(APUESTA != 0) banca = banca + j2.dinero_apostado;
} 
cout << "jugador 3: " << j3.dinero <<"\n";
if(d3.dinero < j3.dinero){
   j3.ganado = j3.dinero - d3.dinero;
  cout << "el jugador 3 ganó: " << j3.dinero_apostado << "\n";
}else if(d3.dinero > j3.dinero){
  cout << "el jugador 3 perdió: " << j3.dinero_apostado << "\n";
  if(APUESTA != 0) banca = banca + j3.dinero_apostado;
} 

cout << "jugador 4: " << j4.dinero <<"\n";
if(d4.dinero < j4.dinero){
   j4.ganado = j4.dinero - d4.dinero;
  cout << "el jugador 4 ganó: " << j4.dinero_apostado << "\n";
}else if(d4.dinero > j4.dinero){
  cout << "el jugador 4 perdió: " << j4.dinero_apostado << "\n";
if(APUESTA != 0) banca = banca + j4.dinero_apostado;
} 
cout << "la banca tiene: " << banca << "\n";

cout << "\n\n\n\n";

}
std::cout << "la banca gana con: " << banca;
}