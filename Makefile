CXX_FLAGS = 

all: examheap.cpp heap.cpp heap.h
	g++ ${CXX_FLAGS} examheap.cpp heap.cpp -o examheap