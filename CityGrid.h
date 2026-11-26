#ifndef CITY_GRID_H
#define CITY_GRID_H

const int ROWS = 12;
const int COLS = 12;

class CityGrid {
private:
    int grid[ROWS][COLS];

public:
    CityGrid();
    void initializeGrid();
    void displayGrid() const;
    int getCell(int row, int col) const;
    void setCell(int row, int col, int value);
    bool isRoad(int row, int col) const;
    bool isIntersection(int row, int col) const;
};

#endif
