#include "BTree.h"

int main() {
    BPNode bp;
    BRNode br;
    BPTree bt;

    bp.size = 1;
    br.size = 2;
    bt.insert(bp);
    bt.insert(br);
    return 0;
}
