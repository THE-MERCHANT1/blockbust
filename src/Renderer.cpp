#include<iostream>
#include<common.h>
#include "Renderer.h"
using namespace std;

void Renderer::clearScreen(){
    system("clear");
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

void Renderer::titleScreen()
{
    
 drawCentered(logo);
 char c=getch();
   if(c=='\n'){clearScreen();}

}
