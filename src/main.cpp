#include<iostream>
#include <cstdlib>
#include"Renderer.h"
#include"Game.h"
#include"Piece.h"
#include<common.h>

using namespace std;

int main()
{
initscr();            
noecho();
cbreak();
keypad(stdscr, TRUE);


Renderer render;
Game game;
Piece piece;
Board board;

render.board(board.grid,piece.randomPiece(),500);

}