#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>


int main()
{
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_SAMPLE *sample = NULL;


	al_init();

	al_init_primitives_addon();
	al_init_font_addon();
	al_init_ttf_addon();


	if (!al_install_audio()) {
		fprintf(stderr, "failed to initialize audio!\n");
		return -1;
	}

	if (!al_init_acodec_addon()) {
		fprintf(stderr, "failed to initialize audio codecs!\n");
		return -1;
	}



	if (!al_reserve_samples(1)) {
		fprintf(stderr, "failed to reserve samples!\n");
		return -1;
	}
	
	ALLEGRO_FONT *font = al_load_ttf_font("LD.ttf", 300, 0);

	display = al_create_display(640, 480);



	sample = al_load_sample("accordion.wav");

	if (!sample) {
		printf("Audio clip sample not loaded!\n");
		return -1;
	}

	


	

	

	/* Loop the sample until the display closes. */
	al_play_sample(sample, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_LOOP, NULL);

	display = al_create_display(640, 480);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_draw_triangle(100, 250, 150, 300, 120, 150, al_map_rgb(0, 250, 100), 6.5);//left wing

	al_draw_triangle(150, 120, 300, 150, 250, 100, al_map_rgb(0, 250, 100), 6.5);//right wing

	al_draw_circle(163.5, 175, 45.5, al_map_rgb(0, 250, 100), 10);//body

	al_draw_circle(180.5, 350.5, 10, al_map_rgb(250, 100, 0), 20);//bullet

	al_draw_circle(600.5, 370.5, 45.5, al_map_rgb(0, 100, 250), 100);//planet

	al_draw_circle(600.5, 370.5, 10, al_map_rgb(250, 100, 0), 20);//bullet

	al_draw_circle(550.5, 370.5, 10, al_map_rgb(0, 0, 0), 10.5);//space whole

	al_draw_circle(550.5, 300, 10, al_map_rgb(0, 0, 0), 10.5);//space whole

	al_draw_circle(640.5, 300, 10, al_map_rgb(0, 0, 0), 10.5);//space whole

	al_draw_circle(600, 300, 10, al_map_rgb(0, 0, 0), 10.5);//space whole

	al_draw_text(font, al_map_rgb(255, 255, 255), 640 / 2, (480 / 4), ALLEGRO_ALIGN_CENTRE, "YOU'RE ASTRO-ORDINARY");

	al_flip_display();

	




	






	al_rest(10.0);
	
	al_destroy_display(display);
	al_destroy_sample(sample);
	al_destroy_display;

	return 0;
}






