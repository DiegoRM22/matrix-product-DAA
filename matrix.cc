#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "matrix.h"

Matrix::Matrix(int rows, int columns) {
    this->rows = rows;
    this->columns = columns;
    this->matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        this->matrix[i] = new int[columns];
    }
}

void Matrix::RandomInitialize() {
    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->columns; j++) {
            int randomValue = rand() % 10;
            this->matrix[i][j] = randomValue;
        }
    }
}


void Matrix::print() {
    std::cout << "Matrix: " << std::endl;
    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->columns; j++) {
            std::cout << this->matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}