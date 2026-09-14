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


void Renderer::board(std::array<array<int,8>,8> grid,shape p,int score)
{   clearScreen();
    clearScreen();
int startCol=(60-line.size())/2;

    mvprintw(4,28,"%d",score);
    mvprintw(6,startCol,"%s",line.c_str());
    printw("\n");
     int rt=7;
    for(auto i:grid)
    {   mvprintw(rt,14,"%s","|");
        
         
        int ct=16;
        for(auto j:i)
        {  
            
            if(j==1){mvprintw(rt,ct,"%s","[#]");}
            else{mvprintw(rt,ct,"%s","[#]");}
            ct+=4;          
        }
         mvprintw(rt,44,"%s","|");
         ++rt;
        
        printw("\n");
     
    }
    printw("\n");
    mvprintw(6+9,startCol,"%s",line.c_str());
    rt=16;
    for(auto i:p.sh)
    {   int ct=15;
        for(auto j:i)
        {
            if(i==1){mvprintw(rt,ct,"%s","#");}
            ++ct;
        }
        ++rt;

    }
      refresh();
    
    

}