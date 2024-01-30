
#include "columnsAlgorithm.h"


Matrix ColumnsAlgorithm::multiply(Matrix &a, Matrix &b) {
  Matrix result(a.getRows(), b.getColumns());
  for (int column = 0; column < b.getColumns(); column++) {
    for (int row = 0; row < a.getRows(); row++) {
      int sum = 0;
      for (int k = 0; k < a.getColumns(); k++) {
        sum += a.getValue(row, k) * b.getValue(k, column);
      }
      result.setValue(row, column, sum);
    }
  }
  return result;
}