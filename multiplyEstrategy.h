
#include "matrix.h"

#pragma once

class MatrixMultiplyEstrategy {
 public:
  virtual Matrix multiply(Matrix &a, Matrix &b) = 0;
};