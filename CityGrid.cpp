#include "CityGrid.h"
#include <iostream>
using namespace std;

CityGrid::CityGrid() {
    initializeGrid();
}

void CityGrid::initializeGrid() {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            grid[i][j] = 0;

    for (int j = 0; j < COLS; j++) {
        grid[3][j] = 1;
        grid[6][j] = 1;
        grid[9][j] = 1;
    }

    for (int i = 0; i < ROWS; i++) {
        grid[i][3] = 1;
        grid[i][6] = 1;
        grid[i][9] = 1;
    }

    int inter[][2] = {{3,3},{3,6},{3,9},{6,3},{6,6},{6,9},{9,3},{9,6},{9,9}};
    for (int k = 0; k < 9; k++)
        grid[inter[k][0]][inter[k][1]] = 2;
}

void CityGrid::displayGrid() const {
    cout << "\n===== CITY GRID (0=Empty, 1=Road, 2=Intersection) =====\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}

int CityGrid::getCell(int row, int col) const {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS)
        return grid[row][col];
    return -1;
}

void CityGrid::setCell(int row, int col, int value) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS)
        grid[row][col] = value;
}

bool CityGrid::isRoad(int row, int col) const {
    int val = getCell(row, col);
    return (val == 1 || val == 2);
}

bool CityGrid::isIntersection(int row, int col) const {
    return getCell(row, col) == 2;
}
