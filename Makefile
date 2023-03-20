CXX_FLAGS = -Wall

examheap: examheap.cpp heap.cpp
	g++ ${CXX_FLAGS} examheap.cpp heap.cpp -o examheap