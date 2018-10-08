#ifndef SC_S_H
#define SC_S_H
#include <ostream>
#include <vector>
#include "OrderedPair.h"

class Set {
  public:
    void addPair(OrderedPair pair);
    void print(std::ostream& os) const;
    Set composeWith(const Set &other) const;
  private:
    std::vector<OrderedPair> pairs;
};

#endif