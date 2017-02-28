#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
int main() {
	float picture[6][6]{ { 100,200 },{ 250,300 },{ 300,450 },{ 500,200 },{ 400,100 },{ 100,200 } };
	al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY*display = NULL;
	al_create_display(640, 480);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_ribbon(*picture, sizeof(*picture), ALLEGRO_COLOR(al_map_rgb(0, 255, 255)), 12, 6);
	al_flip_display();
	al_rest(10);
	al_destroy_display(display);
}