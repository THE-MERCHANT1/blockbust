#include"common.h"
#include"Game.h"

Game::Game()
{   
    score=0;
}
std::optional<std::array<shape, 3>> choiceLoader()
{   std::array<shape,3> choices;
    std::unordered_map<std::string,int>check;
    for(int i=0;i<3;i++){
    bool x=true;
    
    while(x)
    {
        shape tmp=Piece::randomPiece();
        if(check.size()==Piece::pie.size()){game0ver=true;break;}//checks if all shapes occured once
        if(check[tmp.name]>1){continue;}//checks if piece occurred more than once
        if(board.hasPlace(tmp)){x=0;choices[i]=tmp;}
        else{check[tmp.name]++;}
    }

    if (game0ver){break;}
}
if(game0ver)
return choices;
}

void Game::roundControl()
{


}
void Game::inputPiece(char c)
{
    

int ch=getch();

   
}
void Game::inputPos(char c)
{
   
}

void Game::gameOn()
{
    while(!game0ver)
    {
        
    }
}
