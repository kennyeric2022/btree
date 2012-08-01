#include "common.h"

class Node {
public:
    virtual int getSize() const = 0;
    int size;
};

class Tree {
public:
    virtual void insert(const Node &) = 0;
    virtual void del(const Node &) = 0;
    virtual void update(const Node &) = 0;
    virtual Node& search(const string &) = 0;
};
