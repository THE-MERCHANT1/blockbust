#include"common.h"
#include"Board.h"
#include"Piece.h"

class Game
{  public:
    std::array<shape,3> choices;
    bool game0ver=false;
    int score;
    int maxScore;
    Board board;
    Piece piece;
    void choiceLoader();
    void roundControl();    
    void input(char c);
};
