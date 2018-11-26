#include <iostream>
#include "Project.hpp"
#include <ncurses.h>
#include <string>
#include <string.h>
#include <Table.hpp>
using namespace std;

int main()
{
	string msg1("sevenle");
	string msg2("3le");

	initscr();
	timeout(0);
	noecho();
	WINDOW* table_1 = newwin(8, 43, 0, 0);
	WINDOW* table_2 = newwin(8, 43, 9, 0);
	box(table_1, '|', '-');
	box(table_2, '|', '-');
	refresh();
	wrefresh(table_1);
	wrefresh(table_2);
	wprintw(table_1, "hey");
	int x = 0;



	while(1)
	{
		mvwprintw(table_2, 1, 0, "%7s|%08d|", msg1.c_str(), x++);
		mvwprintw(table_2, 2, 0, (string(41, '-')).c_str());
		char c = getch();
		if(c == 'x')
		{
			wrefresh(table_1);
			wrefresh(table_2);
		}
		else if(c == '`')
		{

			break;
		}
	}

	endwin();
	return 0;
}
