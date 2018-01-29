#include <iostream>
#include <allegro5\allegro_font.h>//sets up allegro to write words
#include <allegro5/allegro_ttf.h>//sets up allegro to import cool fonts
using namespace std;
int age = 40;

int main() {
	ALLEGRO_DISPLAY *gamewindow = NULL;

	al_init();

	al_init_font_addon();
	al_init_ttf_addon();

	cout << "how old are you" << endl;
	cin >> age;

	ALLEGRO_FONT *font = al_load_ttf_font("Strange Shadow.ttf", 32, 0);

	gamewindow = al_create_display(640, 400);

	al_set_window_position(gamewindow, 200, 200);

	al_set_window_title(gamewindow, "AGE");

	al_clear_to_color(al_map_rgb(50, 10, 70));

	al_draw_textf(font, al_map_rgb(70, 20, 100), 100, 100, ALLEGRO_ALIGN_LEFT, "HAPPY %d BIRTHDAY", age);

	al_flip_display();

	al_rest(25.0);

	al_destroy_display(gamewindow);

}
