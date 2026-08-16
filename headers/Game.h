#include <iostream>
#include <vector>
class game
{
private:
    struct piece
    {
        std::string name;
        std::vector<std::vector<int>> p;
    };
    std::vector<piece> pieces = {{"mono", {{1}}}, {"big block", {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}}}, {"boomrang BL", {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}}}, {"boomrang BR", {{0, 0, 1}, {0, 0, 1}, {1, 1, 1}}}, {"boomrang TL", {{1, 1, 1}, {1, 0, 0}, {1, 0, 0}}}, {"boomrang TR", {{1, 1, 1}, {0, 0, 1}, {0, 0, 1}}}, {"small block", {{1, 1}, {1, 1}}}, {"corner TL", {{1, 1}, {1, 0}}}, {"corner TR", {{1, 1}, {0, 1}}}, {"corner BL", {{1, 0}, {1, 1}}}, {"corner BR", {{0, 1}, {1, 1}}},{"zigzag R",{{0,0,1},{0,1,0},{1,0,0}}},{"zigzag L",{{1,0,0},{0,1,0},{0,0,1}}}};
};