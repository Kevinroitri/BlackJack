
#include "pch.h"
#include <iostream>
#include <windows.h>

using namespace std;

string palabra;

//Atributos del jugador

string jugador = "Jugador 1";


//Atributos del crupier

string crupier = "Crupier";


//Atributos de las cartas


bool Corazones[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
bool Diamantes[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
bool Treboles[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
bool Picas[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

int valAs;
int posicionAleatoriaPalo = 0;
int posicionAleatoriaNumero = 0;
int valorCarta;
int opcionAS; 
int cartasJugador;
int valorTotal;
int valorCartaCrup;
int cartasCrupier;
int valorTotalCrup;
int opcion;

void gameIntro() {

    cout << "Bienvenido a BlackJack \n";
    Sleep(500);
    cout << "Tu nombre es: " << jugador << "\n";
    Sleep(500);
    cout << "Jugaras contra el: " << crupier << "\n";
    Sleep(500);

}
void cartaJugador() {
    srand(time(NULL));
    while (cartasJugador < 2)
    { 
        posicionAleatoriaPalo = rand() % 4;


        if (posicionAleatoriaPalo == 0)
        {

            posicionAleatoriaNumero = rand() % 13;

            if (Corazones[posicionAleatoriaNumero] == 1)
            {
                cout << posicionAleatoriaNumero << "\n";

                if (posicionAleatoriaNumero == 0)
                {
                    cout << "Escoje si el valor sel AS tiene valor 1 con la Tecla [1] o valor 11 con la Tecla [2]";

                    cin >> opcionAS;

                    if (opcionAS == 1)
                    {
                        valorCarta = 1;

                    }
                    else if (opcionAS == 2)
                    {
                        valorCarta = 11;
                    }

                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                {
                    valorCarta = posicionAleatoriaNumero + 1;
                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if (posicionAleatoriaNumero >= 10)
                {
                    valorCarta = 10;
                    Corazones[posicionAleatoriaNumero] = 0;
                }

            }

            cout << "Te han repartido un " << valorCarta << " de Corazones\n";
        }
        else if (posicionAleatoriaPalo == 1)
        {
            posicionAleatoriaNumero = rand() % 13;

            if (Corazones[posicionAleatoriaNumero] == 1)
            {
                cout << posicionAleatoriaNumero << "\n";

                if (posicionAleatoriaNumero == 0)
                {
                    cout << "Escoje si el valor sel AS tiene valor 1 con la Tecla [1] o valor 11 con la Tecla [2]";

                    cin >> opcionAS;

                    if (opcionAS == 1)
                    {
                        valorCarta = 1;

                    }
                    else if (opcionAS == 2)
                    {
                        valorCarta = 11;
                    }

                    Diamantes[posicionAleatoriaNumero] = 0;

                }
                else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                {
                    valorCarta = posicionAleatoriaNumero + 1;
                    Diamantes[posicionAleatoriaNumero] = 0;

                }
                else if (posicionAleatoriaNumero >= 10)
                {
                    valorCarta = 10;
                    Diamantes[posicionAleatoriaNumero] = 0;
                }

            }

            cout << "Te han repartido un " << valorCarta << " de Diamantes\n";


        }
        else if (posicionAleatoriaPalo == 2)
        {
            posicionAleatoriaNumero = rand() % 13;

            if (Corazones[posicionAleatoriaNumero] == 1)
            {
                cout << posicionAleatoriaNumero << "\n";

                if (posicionAleatoriaNumero == 0)
                {
                    cout << "Escoje si el valor sel AS tiene valor 1 con la Tecla [1] o valor 11 con la Tecla [2]";

                    cin >> opcionAS;

                    if (opcionAS == 1)
                    {
                        valorCarta = 1;

                    }
                    else if (opcionAS == 2)
                    {
                        valorCarta = 11;
                    }

                    Treboles[posicionAleatoriaNumero] = 0;

                }
                else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                {
                    valorCarta = posicionAleatoriaNumero + 1;
                    Treboles[posicionAleatoriaNumero] = 0;

                }
                else if (posicionAleatoriaNumero >= 10)
                {
                    valorCarta = 10;
                    Treboles[posicionAleatoriaNumero] = 0;
                }

            }

            cout << "Te han repartido un " << valorCarta << " de Treboles\n";

        }
        else if (posicionAleatoriaPalo == 3)
        {
            posicionAleatoriaNumero = rand() % 13;

            if (Corazones[posicionAleatoriaNumero] == 1)
            {
                cout << posicionAleatoriaNumero << "\n";

                if (posicionAleatoriaNumero == 0)
                {
                    cout << "Escoje si el valor sel AS tiene valor 1 con la Tecla [1] o valor 11 con la Tecla [2]";

                    cin >> opcionAS;

                    if (opcionAS == 1)
                    {
                        valorCarta = 1;

                    }
                    else if (opcionAS == 2)
                    {
                        valorCarta = 11;
                    }

                    Picas[posicionAleatoriaNumero] = 0;

                }
                else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                {
                    valorCarta = posicionAleatoriaNumero + 1;
                    Picas[posicionAleatoriaNumero] = 0;

                }
                else if (posicionAleatoriaNumero >= 10)
                {
                    valorCarta = 10;
                    Picas[posicionAleatoriaNumero] = 0;
                }

            }

            cout << "Te han repartido un " << valorCarta << " de Picas\n";

        }

        cartasJugador++;
        valorTotal = valorTotal + valorCarta;
    }
    cout << "Te han repartido dos cartas que en total suman " << valorTotal << "\n";
}
void cartaCrupier() {

    srand(time(NULL));

    while (cartasCrupier < 1)
    {
        
        posicionAleatoriaPalo = rand() % 4;


        if (posicionAleatoriaPalo == 0)
        {

            posicionAleatoriaNumero = rand() % 13;

            if (Corazones[posicionAleatoriaNumero] == 1)
            {
                cout << posicionAleatoriaNumero << "\n";

                if (posicionAleatoriaNumero == 0)
                {

                    if ((valorTotalCrup + 11) < 21)
                    {
                        valorCartaCrup = 11;

                    }
                    else
                    {
                        valorCartaCrup = 1;
                    }

                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                {
                    valorCartaCrup = posicionAleatoriaNumero + 1;
                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if (posicionAleatoriaNumero >= 10)
                {
                    valorCartaCrup = 10;
                    Corazones[posicionAleatoriaNumero] = 0;
                }

            }

            cout << "El crupier tiene un " << valorCartaCrup << " de Corazones\n";
        }
        else if (posicionAleatoriaPalo == 1)
        {
            posicionAleatoriaNumero = rand() % 13;

            if (Corazones[posicionAleatoriaNumero] == 1)
            {
                cout << posicionAleatoriaNumero << "\n";

                if (posicionAleatoriaNumero == 0)
                {

                    if ((valorTotalCrup + 11) < 21)
                    {
                        valorCartaCrup = 11;

                    }
                    else
                    {
                        valorCartaCrup = 1;
                    }

                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                {
                    valorCartaCrup = posicionAleatoriaNumero + 1;
                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if (posicionAleatoriaNumero >= 10)
                {
                    valorCartaCrup = 10;
                    Corazones[posicionAleatoriaNumero] = 0;
                }

            }

            cout << "El crupier tiene un " << valorCartaCrup << " de Diamantes\n";


        }
        else if (posicionAleatoriaPalo == 2)
        {
            posicionAleatoriaNumero = rand() % 13;

            if (Corazones[posicionAleatoriaNumero] == 1)
            {
                cout << posicionAleatoriaNumero << "\n";

                if (posicionAleatoriaNumero == 0)
                {

                    if ((valorTotalCrup + 11) < 21)
                    {
                        valorCartaCrup = 11;

                    }
                    else
                    {
                        valorCartaCrup = 1;
                    }

                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                {
                    valorCartaCrup = posicionAleatoriaNumero + 1;
                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if (posicionAleatoriaNumero >= 10)
                {
                    valorCartaCrup = 10;
                    Corazones[posicionAleatoriaNumero] = 0;
                }

            }

            cout << "El crupier tiene un " << valorCartaCrup << " de Treboles\n";

        }
        else if (posicionAleatoriaPalo == 3)
        {
            posicionAleatoriaNumero = rand() % 13;

            if (Corazones[posicionAleatoriaNumero] == 1)
            {
                cout << posicionAleatoriaNumero << "\n";

                if (posicionAleatoriaNumero == 0)
                {

                    if ((valorTotalCrup + 11) < 21)
                    {
                        valorCartaCrup = 11;

                    }
                    else
                    {
                        valorCartaCrup = 1;
                    }

                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                {
                    valorCartaCrup = posicionAleatoriaNumero + 1;
                    Corazones[posicionAleatoriaNumero] = 0;

                }
                else if (posicionAleatoriaNumero >= 10)
                {
                    valorCartaCrup = 10;
                    Corazones[posicionAleatoriaNumero] = 0;
                }

            }

            cout << "El crupier tiene un " << valorCartaCrup << " de Picas\n";

        }

        cartasCrupier++;
        valorTotalCrup = valorTotalCrup + valorCartaCrup;
        
    }
    cout << "El crupier tiene en total " << valorTotalCrup << "\n";
}
void cartaJugadorRep() {

    int cont = cartasJugador + 1;
    int option;

    if (valorTotal < 21)
    {
        srand(time(NULL));
        while (cartasJugador < cont)
        {
            posicionAleatoriaPalo = rand() % 4;


            if (posicionAleatoriaPalo == 0)
            {

                posicionAleatoriaNumero = rand() % 13;

                if (Corazones[posicionAleatoriaNumero] == 1)
                {
                    cout << posicionAleatoriaNumero << "\n";

                    if (posicionAleatoriaNumero == 0)
                    {
                        cout << "Escoje si el valor sel AS tiene valor 1 con la Tecla [1] o valor 11 con la Tecla [2]";

                        cin >> opcionAS;

                        if (opcionAS == 1)
                        {
                            valorCarta = 1;

                        }
                        else if (opcionAS == 2)
                        {
                            valorCarta = 11;
                        }

                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                    {
                        valorCarta = posicionAleatoriaNumero + 1;
                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if (posicionAleatoriaNumero >= 10)
                    {
                        valorCarta = 10;
                        Corazones[posicionAleatoriaNumero] = 0;
                    }

                }

                cout << "Te han repartido un " << valorCarta << " de Corazones\n";
            }
            else if (posicionAleatoriaPalo == 1)
            {
                posicionAleatoriaNumero = rand() % 13;

                if (Corazones[posicionAleatoriaNumero] == 1)
                {
                    cout << posicionAleatoriaNumero << "\n";

                    if (posicionAleatoriaNumero == 0)
                    {
                        cout << "Escoje si el valor sel AS tiene valor 1 con la Tecla [1] o valor 11 con la Tecla [2]";

                        cin >> opcionAS;

                        if (opcionAS == 1)
                        {
                            valorCarta = 1;

                        }
                        else if (opcionAS == 2)
                        {
                            valorCarta = 11;
                        }

                        Diamantes[posicionAleatoriaNumero] = 0;

                    }
                    else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                    {
                        valorCarta = posicionAleatoriaNumero + 1;
                        Diamantes[posicionAleatoriaNumero] = 0;

                    }
                    else if (posicionAleatoriaNumero >= 10)
                    {
                        valorCarta = 10;
                        Diamantes[posicionAleatoriaNumero] = 0;
                    }

                }

                cout << "Te han repartido un " << valorCarta << " de Diamantes\n";


            }
            else if (posicionAleatoriaPalo == 2)
            {
                posicionAleatoriaNumero = rand() % 13;

                if (Corazones[posicionAleatoriaNumero] == 1)
                {
                    cout << posicionAleatoriaNumero << "\n";

                    if (posicionAleatoriaNumero == 0)
                    {
                        cout << "Escoje si el valor sel AS tiene valor 1 con la Tecla [1] o valor 11 con la Tecla [2]";

                        cin >> opcionAS;

                        if (opcionAS == 1)
                        {
                            valorCarta = 1;

                        }
                        else if (opcionAS == 2)
                        {
                            valorCarta = 11;
                        }

                        Treboles[posicionAleatoriaNumero] = 0;

                    }
                    else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                    {
                        valorCarta = posicionAleatoriaNumero + 1;
                        Treboles[posicionAleatoriaNumero] = 0;

                    }
                    else if (posicionAleatoriaNumero >= 10)
                    {
                        valorCarta = 10;
                        Treboles[posicionAleatoriaNumero] = 0;
                    }

                }

                cout << "Te han repartido un " << valorCarta << " de Treboles\n";

            }
            else if (posicionAleatoriaPalo == 3)
            {
                posicionAleatoriaNumero = rand() % 13;

                if (Corazones[posicionAleatoriaNumero] == 1)
                {
                    cout << posicionAleatoriaNumero << "\n";

                    if (posicionAleatoriaNumero == 0)
                    {
                        cout << "Escoje si el valor sel AS tiene valor 1 con la Tecla [1] o valor 11 con la Tecla [2]";

                        cin >> opcionAS;

                        if (opcionAS == 1)
                        {
                            valorCarta = 1;

                        }
                        else if (opcionAS == 2)
                        {
                            valorCarta = 11;
                        }

                        Picas[posicionAleatoriaNumero] = 0;

                    }
                    else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                    {
                        valorCarta = posicionAleatoriaNumero + 1;
                        Picas[posicionAleatoriaNumero] = 0;

                    }
                    else if (posicionAleatoriaNumero >= 10)
                    {
                        valorCarta = 10;
                        Picas[posicionAleatoriaNumero] = 0;
                    }

                }

                cout << "Te han repartido un " << valorCarta << " de Picas\n";

            }

            cartasJugador++;
            valorTotal = valorTotal + valorCarta;

            cout << "Te han repartido dos cartas que en total suman " << valorTotal << "\n";

            cout << "Te han repartido una carta sigues jugando SI con [1] NO con [2] \n";

            cin >> option;

            if (option == 1)
            {
                cont++;
            }
            else if (option == 2) {
            
                cont = cont;
            
            }

        }
    }
    else if (valorTotal == 21) {
    
        cout << "Perfecto has conseguido un total de 21, HAS GANADO !!!\n";
    
    }
    else {
    
        cout << "Te has pasado el Crupier gana, HAS PERDIDO !!!\n";
    
    }
}
void cartaCrupierRep() {

    
    int cont = cartasCrupier + 1;
    
    if (valorTotal == 21) {

        cout << "Perfecto has conseguido un total de 21, HAS GANADO !!!\n";

    }
    else if(valorTotal > 21) {

        cout << "Te has pasado el Crupier gana, HAS PERDIDO !!!\n";

    }
    else if (valorTotalCrup < 21)
    {
        srand(time(NULL));
        while (cartasCrupier < cont)
        {

            posicionAleatoriaPalo = rand() % 4;


            if (posicionAleatoriaPalo == 0)
            {

                posicionAleatoriaNumero = rand() % 13;

                if (Corazones[posicionAleatoriaNumero] == 1)
                {
                    cout << posicionAleatoriaNumero << "\n";

                    if (posicionAleatoriaNumero == 0)
                    {

                        if ((valorTotalCrup + 11) < 21)
                        {
                            valorCartaCrup = 11;

                        }
                        else
                        {
                            valorCartaCrup = 1;
                        }

                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                    {
                        valorCartaCrup = posicionAleatoriaNumero + 1;
                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if (posicionAleatoriaNumero >= 10)
                    {
                        valorCartaCrup = 10;
                        Corazones[posicionAleatoriaNumero] = 0;
                    }

                }

                cout << "El crupier tiene un " << valorCartaCrup << " de Corazones\n";
            }
            else if (posicionAleatoriaPalo == 1)
            {
                posicionAleatoriaNumero = rand() % 13;

                if (Corazones[posicionAleatoriaNumero] == 1)
                {
                    cout << posicionAleatoriaNumero << "\n";

                    if (posicionAleatoriaNumero == 0)
                    {

                        if ((valorTotalCrup + 11) < 21)
                        {
                            valorCartaCrup = 11;

                        }
                        else
                        {
                            valorCartaCrup = 1;
                        }

                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                    {
                        valorCartaCrup = posicionAleatoriaNumero + 1;
                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if (posicionAleatoriaNumero >= 10)
                    {
                        valorCartaCrup = 10;
                        Corazones[posicionAleatoriaNumero] = 0;
                    }

                }

                cout << "El crupier tiene un " << valorCartaCrup << " de Diamantes\n";


            }
            else if (posicionAleatoriaPalo == 2)
            {
                posicionAleatoriaNumero = rand() % 13;

                if (Corazones[posicionAleatoriaNumero] == 1)
                {
                    cout << posicionAleatoriaNumero << "\n";

                    if (posicionAleatoriaNumero == 0)
                    {

                        if ((valorTotalCrup + 11) < 21)
                        {
                            valorCartaCrup = 11;

                        }
                        else
                        {
                            valorCartaCrup = 1;
                        }

                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                    {
                        valorCartaCrup = posicionAleatoriaNumero + 1;
                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if (posicionAleatoriaNumero >= 10)
                    {
                        valorCartaCrup = 10;
                        Corazones[posicionAleatoriaNumero] = 0;
                    }

                }

                cout << "El crupier tiene un " << valorCartaCrup << " de Treboles\n";

            }
            else if (posicionAleatoriaPalo == 3)
            {
                posicionAleatoriaNumero = rand() % 13;

                if (Corazones[posicionAleatoriaNumero] == 1)
                {
                    cout << posicionAleatoriaNumero << "\n";

                    if (posicionAleatoriaNumero == 0)
                    {

                        if ((valorTotalCrup + 11) < 21)
                        {
                            valorCartaCrup = 11;

                        }
                        else
                        {
                            valorCartaCrup = 1;
                        }

                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if ((posicionAleatoriaNumero >= 1) && (posicionAleatoriaNumero <= 9))
                    {
                        valorCartaCrup = posicionAleatoriaNumero + 1;
                        Corazones[posicionAleatoriaNumero] = 0;

                    }
                    else if (posicionAleatoriaNumero >= 10)
                    {
                        valorCartaCrup = 10;
                        Corazones[posicionAleatoriaNumero] = 0;
                    }

                }

                cout << "El crupier tiene un " << valorCartaCrup << " de Picas\n";

            }

            cartasCrupier++;
            valorTotalCrup = valorTotalCrup + valorCartaCrup;
            
            if (valorTotalCrup > 16)
            {
                cont = cont;
            }
            else if (valorTotalCrup < 21) {
            
                cont++;
            
            }
        }

        cout << "El crupier tiene en total " << valorTotalCrup << "\n";

        if (valorTotal == 21) {

            cout << "Perfecto has conseguido un total de 21, HAS GANADO !!!\n";

        }
        else if (valorTotal > valorTotalCrup) {

            cout << "Perfecto has conseguido mas puntos que el crupier, HAS GANADO !!!\n";

        }
        else if (valorTotalCrup > valorTotal && valorTotalCrup < 21) {
        
            cout << "el crupier ha conseguido mas puntos que tu, HAS PERDIDO !!!\n";
        
        }
        else if (valorTotalCrup > 21) {
        
            cout << "Perfecto el crupier se ha pasdo de puntos, HAS GANADO !!!\n";
        
        }
        else if (valorTotalCrup == valorTotal) {
        
            cout << "Ambos teneis la misma puntuacion, EMPATE !!!\n";
        
        }
    }
    else if (valorTotalCrup == 21) {
    
        cout << "El Crupier a conseguido un total de 21, HAS PERDIDO !!!\n";
    
    }
    else {
    
        cout << "El Crupier se ha pasado, HAS GANADO !!!\n";
    
    }
}

int main()
{
   
    gameIntro();
    
    cartaJugador();

    cartaCrupier();

    cout << "Te han repartido una carta sigues jugando SI con [1] NO con [2] \n";

    cin >> opcion;

    if (opcion == 1)
    {
        cartaJugadorRep();
        cartaCrupierRep();
    }
    else if(opcion == 2) {

        cartaCrupierRep();
    }
    else {
    
        cout << "ERROR numero no valido \n";
    
    }
}
