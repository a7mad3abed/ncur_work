#include <ncurses.h>

int main()
{
	initscr();
	curs_set(2);
	int c;


	while(( c = getch()) != 'q')
	{
		addch(c);
	}

	endwin();
}
