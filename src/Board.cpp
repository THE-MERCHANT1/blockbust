#include "common.h"
#include "Board.h"


Board::Board()
{
    for (auto &row : grid)
    {
        row.fill(0);
    }
}

bool Board::canPlace(shape s, int rows, int cols) 
{
    for(int r=0;r<s.sh.size();r++)
    {
        for(int c=0;c<s.sh[r].size();c++)
        {
            if(s.sh[r][c]==0)continue;
            
            int gr =rows+r;
            int gc=cols+c;
            if(gr>8||gc>8||gr<0||gc<0)return false;
            if(grid[gr][gc]!=0)return false;
        }
    }
    return true;
}
void Board::place(shape s,int rows,int cols)
{
    for(int r=0;r<s.sh.size();r++)
    {
        for(int c=0;c<s.sh[r].size();c++)
        {
            grid[r+rows][c+cols]=1;
        }
    }
}

int Board::clearFullLines()
{   std::vector<int>fullRows;
    std::vector<int>fullCols;
       for(int r=0;r<8;r++)
    {
        bool full =true;
        for(int c=0;c<8;c++)
        {
            if(grid[r][c]==0)
            {
                full=false;
                break;
            }
        }
        if(full){fullRows.push_back(r);}
    }

       for(int c=0;c<8;c++)
    {
        bool full =true;
        for(int r=0;r<8;r++)
        {
            if(grid[r][c]==0)
            {
                full=false;
                break;
            }
        }
        if(full){fullRows.push_back(c);}
    }
    for(auto r:fullRows)
    {
        for(int c=0;c<8;c++)
        {
            grid[r][c]=0;
        }
    }
     for(auto c:fullCols)
    {
        for(int r=0;r<8;r++)
        {
            grid[r][c]=0;
        }
    }
    return (int)(fullRows.size()+fullCols.size());
}

bool Board::hasPlace( shape s)
{
    for(int r=0;r<8;r++)
    {
        for(int c=0;c<8;c++)
        {
            if(canPlace(s,r,c))
            {
                return true;
            }
        }
    }
    return false;
}
int Board::get(int row, int col) const
{
    return grid[row][col];
}

