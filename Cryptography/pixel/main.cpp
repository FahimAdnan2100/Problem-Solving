// C++ Implementation for drawing line
#include <graphics.h>

// driver code
int main()
{
	// gm is Graphics mode which is a computer display
	// mode that generates image using pixels.
	// DETECT is a macro defined in "graphics.h" header file
	int gd = DETECT, gm;

	// initgraph initializes the graphics system
	// by loading a graphics driver from disk
	initgraph(&gd, &gm, "");

	// line for x1, y1, x2, y2


	// line for x1, y1, x2, y2
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(100, 100, 500, 300);
    floodfill(102,102,15);
	// line for x1, y1, x2, y2
	setfillstyle(SOLID_FILL,RED);
	circle(275,200,60);
	floodfill(275,202,15);



	getch();

	// closegraph function closes the graphics
	// mode and deallocates all memory allocated
	// by graphics system .
	closegraph();
}
