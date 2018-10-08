#include "Set.h"

void Set::addPair(OrderedPair pair) {
  pairs.push_back(pair);
}

void Set::print(std::ostream& os) const {
  os << "{";

  for(unsigned long i = 0; i < pairs.size(); i++) {
    if (i > 0) {
      os << ", ";
    }

    auto pair = pairs.at(i);
    os << "(" << pair.getX() << ", " << pair.getY() << ")";
  }

  os << "}";
}

Set Set::composeWith(const Set &other) const {
  Set out;

  for (auto &pair : pairs) {
    for (auto &foreign : other.pairs) {
      if (pair.getY() == foreign.getX()) {
        out.addPair(OrderedPair(pair.getX(), foreign.getY()));
      }
    }
  }

  return out;
}
