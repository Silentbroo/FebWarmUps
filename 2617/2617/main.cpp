#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>


int main()
{
	al_init();
	ALLEGRO_DISPLAY* display = al_create_display(800, 600);
	ALLEGRO_FONT* font = al_create_builtin_font();
	
	al_init_font_addon();
	al_init_primitives_addon();

	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_circle(400,300,150,al_map_rgb(250,0, 0),300);
	al_draw_text(font, al_map_rgb(0, 0, 0), 400, 300, ALLEGRO_ALIGN_CENTER, "DO NOT ENTER");
	al_flip_display();
	al_rest(10.0);
	return 0;
}