#include"common.h"
#include"Board.h"
#include"Piece.h"

class Game
{  public:
    Game();
    bool game0ver=false;
    int score;
    int maxScore;
    Board board;
    Piece piece;
std::optional<std::array<shape, 3>> choiceLoader()
    void roundControl();    
    void inputPiece(char c);
    void inputPos(char c);
    void gameOn();
    
};
