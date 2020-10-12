#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

// Esta clase se encarga del manejo del jugador
class player
{
    BITMAP *p1;
 int x,y;
 int direccion;
 int animacion;

    public:
       player();
       void pinta();
       void teclado();
};

player::player()
{
    p1  = load_bmp("IMG/allen2.bmp",NULL);
 // inicializar vbles
 direccion = 0;
 animacion = 0;
 x = 10;
 y = 10;
}

void player::pinta()
{
    masked_blit(p1, buffer, animacion*32, direccion*49, x, y, 32,49);
}

void player::teclado()
{
      int ax = x;
      int ay = y;
      // teclas control usuario
      if ( key[KEY_UP] )
      {
           y-=desplazamiento;
           direccion = 3;
      }
      if ( key[KEY_DOWN] )
      {
           y+=desplazamiento;
           direccion = 0;
      }
      if ( key[KEY_LEFT] )
      {
           x-=desplazamiento;
           direccion = 1;
      }
      if ( key[KEY_RIGHT] )
      {
           x+=desplazamiento;
           direccion = 2;
      }
      if ( ax != x || ay != y )
      {
           // entra si a cambiado alguna de las variables x,y
           animacion++;
           if ( animacion > 2 ) animacion = 0;
      }

      // limites
      if ( x < 0 ) x = 0;
      if ( x > PANTALLA_ANCHO ) x = PANTALLA_ANCHO;
      if ( y < 0 ) y = 0;
      if ( y > PANTALLA_ALTO )  y = PANTALLA_ALTO;
}

#endif // USER_H_INCLUDED
