#include <iostream>
#include  <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    string Equipo;
    int Partidos, Puntaje=0,Gol1, Gol2,Partido;    
    srand(time(NULL)); 

    cout<<"Ingrese el nombre de su equipo: "<<endl;
    cin>>Equipo;
    cout<<"Ingrese la cantidad de partidos pendientes: "<<endl;
    cin>>Partidos;
    for (int i = 0; i < Partidos; i++)
    {
        Gol1 = rand() % 5 +0;
        Gol2 = rand() % 5 +0;

        if(Gol1 == Gol2){
            Partido=1;
            Puntaje+=Partido;
             cout<<"\nEmpatado";
        
        }else if(Gol1>Gol2){
            Partido=3;
            Puntaje+=Partido;
            cout<<"\nSu equipo es el ganador";
            
        } else{
            Partido=0;
            Puntaje+=Partido;
             cout<<"\nSu equipo perdio";
        } 

        cout<<"\tPARTIDO "<<i+1<<endl<<"\n\tPuntos de su Equipo\nEste Partido: "<<Partido<<"\nGlobal: "<<Puntaje<<endl;
        cout<<"Goles del Su Equipo: "<<Gol1<<"\tGoles Equipo "<<i+1<<": "<<Gol2<<endl<<endl;        
    }

    cout<<"Puntaje total del "<<Equipo<<": "<<Puntaje;    
    return 0;
} 
