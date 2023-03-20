CXX_FLAGS = 

all: examheap.cpp heap.cpp
	g++ ${CXX_FLAGS} examheap.cpp heap.cpp -o examheap