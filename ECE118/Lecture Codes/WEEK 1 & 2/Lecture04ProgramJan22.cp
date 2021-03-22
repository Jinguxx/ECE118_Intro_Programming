#include "library.h"

void mainDemoGraphics()
{
	make_window(500,600,100,50);
move_to(50, 50);
set_pen_color(color::brown);
draw_to(50, 100);
set_pen_color_int(255,255,0);
draw_to(100,100);
set_pen_color(0.0,0.0,1.0);
draw_to(50,50);

write_string("Hello Welcome.. It is winter in Miami");
}