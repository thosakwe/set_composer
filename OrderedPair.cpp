#include "OrderedPair.h"

OrderedPair::OrderedPair(int x, int y)
  :x(x), y(y) {}

int const OrderedPair::getX() const {
  return x;
}

int const OrderedPair::getY() const {
  return y;
}
