#include<iostream>
#include<common.h>
#include "Renderer.h"

using namespace std;

void Renderer::clearScreen(){
clear();
refresh();  
}

void Renderer::drawCentered(const std::string logo)
{
    istringstream ss(logo);
    string ln;
    int i=0;
   while (getline(ss,ln))
   {
    int termRows, termCols;
getmaxyx(stdscr, termRows, termCols);
int startCol = (termCols - ln.size()) / 2;
  
    mvprintw(i,startCol,"%s",ln.c_str());
    refresh();
    ++i;
   }
}

char Renderer::titleScreen()
{
    
 drawCentered(logo);
 while(true)
 {
    char c=getch();
    if(c=='\n'){clearScreen();return c;}
    else if(c=='q'){clearScreen();return c;}
 }
   

}
void terSize()
{   
    int rows,cols;
    getmaxyx(stdscr,rows,cols);
   
        while(rows!=30||cols!=60)
        {       clear();
                printw("please resize your screen to 62x30\n");
                 printw("rows=%d cols=%d", rows, cols);
                 refresh();
            getmaxyx(stdscr,rows,cols);
           

        }   
}


void Renderer::board(std::array<array<int,8>,8> grid,int score)
{   clearScreen();
    int startCol = (60 - line.size()) / 2;
    mvprintw(4,30,"%s",score);
    mvprintw(6,12,"%s",line);
    for(auto i:grid)
    {   printw("|");
        for(auto j:i)
        {   
            if(j==1){printw("[#]");}
            else{printw("[ ]")}
            refresh();
        }
        printw("|");
        print("\n");
        refresh();
    }
    
    refresh();

}