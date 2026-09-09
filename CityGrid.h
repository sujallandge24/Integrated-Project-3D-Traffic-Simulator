// CityGrid.h
#ifndef CITY_GRID_H
#define CITY_GRID_H

const int ROWS = 10;
const int COLS = 10;

// 0 = Empty, 1 = Road, 2 = Intersection
class CityGrid {
private:
    int grid[ROWS][COLS];

public:
    CityGrid();
    void initializeGrid();
    void displayGrid();
    int getCell(int row, int col);
    void setCell(int row, int col, int value);
};

#endif