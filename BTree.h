#include "common.h" 
#include "tree.h"

//B+ tree node
class BPNode : public Node {
public:
    int size;
    virtual int getSize() const{
        cout << "BPNode size" << endl;
        return size;
    }
};

//B- tree node
class BRNode : public Node {
public:
    int size;
    virtual int getSize() const{
        cout << "BRNode size" << endl;
        return size;
    }
};


class BPTree : public Tree {
public:
    //insert node into B+ tree
    virtual void insert(const Node &node) {
        cout << node.getSize()<< endl;
    }

    virtual void del(const Node &node) {
    }
    
    virtual void update(const Node &node) {
    }

    virtual Node& search(const string &) {
    }
};
