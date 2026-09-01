#include"common.h"
#include"Game.h"

void Game::choiceLoader()
{   
    std::unordered_map<std::string,int>check;
    for(int i=0;i<3;i++){
    bool x=true;
    while(x)
    {
        shape tmp=Piece::randomPiece();
        if(check.size()==Piece::pie.size()){game0ver=true;break;}
        if(check[tmp.name]>1){continue;}
        if(board.hasPlace(tmp)){x=0;choices[i]=tmp;}
        else{check[tmp.name]++;}

    }
}
}

void Game::roundControl()
{

}
void Game::input(char c)
{
   
}