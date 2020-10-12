#include <allegro.h>
#include "Globales.h"
#include "User.h"

///10037068369

void inicia_allegro()
{
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, PANTALLA_ANCHO, PANTALLA_ALTO, 0, 0);

    buffer = create_bitmap(PANTALLA_ANCHO, PANTALLA_ALTO);
}

// programa principal
int main()
{
 inicia_allegro();

 player jugador;
 bool salir, e;

 salir = false;
 e = false;

 while( !e ){
    loading = load_bmp("H.bmp", NULL);

    blit(loading, bufferr, 0, 0, 0, 0, PANTALLA_ANCHO, PANTALLA_ALTO);
    if (key[KEY_ESC]) e=true;

 }

 while ( !salir )
 {
          clear_to_color(buffer, 0xaaaaaa);

          jugador.teclado();

          jugador.pinta();

       pintar_pantalla();

       rest(60);

       // tecla de salida
       if ( key[KEY_ESC] ) salir = true;

    }

 destroy_bitmap(buffer);

 return 0;
}
END_OF_MAIN();
