
#include <iostream>

#include "multiplyEstrategy.h"
#include "matrix.h"

#pragma once

class RowsAlgorithm : public MatrixMultiplyEstrategy {
 public:
  Matrix multiply(Matrix &a, Matrix &b);
};