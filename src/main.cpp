#include<iostream>
#include <cstdlib>
#include"Renderer.h"
#include<common.h>

using namespace std;
void terSize()
{   
    int rows,cols;
    getmaxyx(stdscr,rows,cols);
   
        while(rows!=62||cols!=30)
        {       clear();
                printw("please resize your screen to 62x30\n");
                 printw("rows=%d cols=%d", rows, cols);
                 refresh();
            getmaxyx(stdscr,cols,rows);
           

        }
        
    
}
int main()
{
    initscr();            
noecho();
cbreak();
keypad(stdscr, TRUE);
Renderer obj;
terSize();
obj.clearScreen();
 refresh();

obj.titleScreen();


}