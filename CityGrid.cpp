// CityGrid.cpp
#include "CityGrid.h"
#include <iostream>
using namespace std;

CityGrid::CityGrid() {
    initializeGrid();
}

void CityGrid::initializeGrid() {
    // Initialize everything as empty
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = 0;
        }
    }

    // Create horizontal roads
    for (int j = 0; j < COLS; j++) {
        grid[2][j] = 1;
        grid[5][j] = 1;
        grid[8][j] = 1;
    }

    // Create vertical roads
    for (int i = 0; i < ROWS; i++) {
        grid[i][2] = 1;
        grid[i][5] = 1;
        grid[i][8] = 1;
    }

    // Mark intersections
    int intersections[][2] = {{2,2},{2,5},{2,8},{5,2},{5,5},{5,8},{8,2},{8,5},{8,8}};
    for (int k = 0; k < 9; k++) {
        grid[intersections[k][0]][intersections[k][1]] = 2;
    }
}

void CityGrid::displayGrid() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int CityGrid::getCell(int row, int col) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS)
        return grid[row][col];
    return -1;
}

void CityGrid::setCell(int row, int col, int value) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS)
        grid[row][col] = value;
}

int main() {
    CityGrid city;
    city.displayGrid();
    return 0;
}