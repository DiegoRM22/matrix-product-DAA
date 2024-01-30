
// Header guards
#pragma once


class Matrix {
  public:
    Matrix(int rows, int columns);
    void RandomInitialize();
    int getRows() { return this->rows; }
    int getColumns() { return this->columns; }
    int getValue(int row, int column) { return this->matrix[row][column]; }
    void setValue(int row, int column, int value) { this->matrix[row][column] = value; }
    void print();
    int at(int row, int column) { return this->matrix[row][column]; }

  private:
    int rows;
    int columns;
    int **matrix;
    
};

