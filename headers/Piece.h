#pragma once
#include "common.h"

class shape
{
public:
shape();
    shape(const std::string name, const std::vector<std::vector<int>> sh);
    std::string name;
    std::vector<std::vector<int>> sh;
};


class Piece
{
public:

 static const std::vector<shape> pie ;
     static shape randomPiece();
};
