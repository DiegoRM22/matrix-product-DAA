#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <ctime>


#include "multiplyEstrategy.h"
#include "rowsAlgorithm.h"
#include "columnsAlgorithm.h"
#include "matrix.h"

const int ROWS = 2000;
const int COLUMNS = 2000;

int main() {
    srand(time(NULL));
    Matrix a(ROWS, COLUMNS);
    a.RandomInitialize();
    Matrix b(ROWS, COLUMNS);
    b.RandomInitialize();
    MatrixMultiplyEstrategy *rowsmult = new RowsAlgorithm();
    // Medir el tiempo de ejecución
    unsigned begin = clock();
    Matrix d = rowsmult->multiply(a, b);
    unsigned end = clock();
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

    unsigned begin2 = clock();
    MatrixMultiplyEstrategy *columnsmult = new ColumnsAlgorithm();
    unsigned end2 = clock();
    double elapsed_secs2 = double(end2 - begin2) / CLOCKS_PER_SEC;
    
    Matrix e = columnsmult->multiply(a, b);
    std::cout << "Time Rows Algorithm: " << elapsed_secs << std::endl;
    std::cout << "Time Columns Algorithm: " << elapsed_secs2 << std::endl;
    


    return 0;
}
