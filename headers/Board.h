#include "Piece.h"
class Board 
{
public:

Board();    

bool canPlace(shape s,int rows,int cols);
void place ( shape s,int rows,int cols);
int clearFullLines();
bool hasPlace( shape s) ;
int get(int row,int col)const;


private:
    std::array<std::array<int,8>,8> grid;
};

