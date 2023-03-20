CXX_FLAGS = 

examheap: examheap.cpp heap.cpp heap.h
	g++ ${CXX_FLAGS} examheap.cpp heap.cpp -o test 