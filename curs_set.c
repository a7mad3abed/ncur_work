#include <ncurses.h>

int main()
{
	initscr();
	curs_set(1);
	int c;


	while(( c = getch()) != 'q')
	{
		addch(c);
	}

	endwin();
}
