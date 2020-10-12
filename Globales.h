#ifndef GLOBALES_H_INCLUDED
#define GLOBALES_H_INCLUDED

// Ancho y alto de la pantalla
const int PANTALLA_ANCHO = 1280;
const int PANTALLA_ALTO  = 720;

// En este BITMAP dibujaremos todo
BITMAP *buffer;
BITMAP *loading;

// es el espacio en pixel que recorre el jugador al andar
const int desplazamiento=4;

// Copiar el buffer a la pantalla del juego (screen)
void pintar_pantalla()
{
    blit(buffer, screen, 0, 0, 0, 0, PANTALLA_ANCHO, PANTALLA_ALTO);
}


#endif // GLOBALES_H_INCLUDED
