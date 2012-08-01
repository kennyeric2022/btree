# Makefile for tree 
CC=g++
CFLAGS=-Wl,-rpath  -lz -lbz2 -lpthread -lm -lc -O2 -g

tree: tree.cpp
	$(CC) -o tree tree.cpp BTree.h BTree.cpp $(CFLAGS)
	@echo ""
	@echo "tree build complete."
	@echo ""	

clean: tree
	rm -f tree
