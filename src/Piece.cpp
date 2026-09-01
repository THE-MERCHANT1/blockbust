#include"common.h"
#include"Piece.h"

 const std::vector<shape> Piece::pie = {{"mono", {{1}}}, {"big block", {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}}}, {"boomrang BL", {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}}}, {"boomrang BR", {{0, 0, 1}, {0, 0, 1}, {1, 1, 1}}}, {"boomrang TL", {{1, 1, 1}, {1, 0, 0}, {1, 0, 0}}}, {"boomrang TR", {{1, 1, 1}, {0, 0, 1}, {0, 0, 1}}}, {"small block", {{1, 1}, {1, 1}}}, {"corner TL", {{1, 1}, {1, 0}}}, {"corner TR", {{1, 1}, {0, 1}}}, {"corner BL", {{1, 0}, {1, 1}}}, {"corner BR", {{0, 1}, {1, 1}}}, {"zigzag R", {{0, 0, 1}, {0, 1, 0}, {1, 0, 0}}}, {"zigzag L", {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}}};
shape::shape(std::string name, std::vector<std::vector<int>> sh)
{
    this->name=name;
    this->sh=sh;
};

shape Piece::randomPiece()
{
    std::srand(std::time(nullptr));
    int rm=rand()%pie.size();
    return pie[rm];

}