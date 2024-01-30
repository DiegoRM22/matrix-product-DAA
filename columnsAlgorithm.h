

#include <iostream>

#include "multiplyEstrategy.h"
#include "matrix.h"

#pragma once

class ColumnsAlgorithm : public MatrixMultiplyEstrategy {
 public:
  Matrix multiply(Matrix &a, Matrix &b);
};