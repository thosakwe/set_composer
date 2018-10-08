#ifndef SC_OP_H
#define SC_OP_H

class OrderedPair {
  public:
    OrderedPair(int x, int y);
    int const getX() const;
    int const getY() const;
  private:
    const int x, y;
};

#endif
