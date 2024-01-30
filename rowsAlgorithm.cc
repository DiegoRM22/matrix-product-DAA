
#include "rowsAlgorithm.h"

#include <iostream>


Matrix RowsAlgorithm::multiply(Matrix &a, Matrix &b) {
  Matrix result(a.getRows(), b.getColumns());
  for (int i = 0; i < a.getRows(); i++) {
    for (int j = 0; j < b.getColumns(); j++) {
      int sum = 0;
      for (int k = 0; k < a.getColumns(); k++) {
        sum += a.getValue(i, k) * b.getValue(k, j);
      }
      result.setValue(i, j, sum);
    }
  }
  return result;
}
  

