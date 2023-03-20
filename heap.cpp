// heap.cpp
// Vihan Jayaraman 

#include "heap.h"
#include <iostream>
using std::cout;


Heap Heap::operator=(Heap& h) {
  vdata = h.vdata;
  return *this;
}

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
  //cout << "Testing Push with value " << value << std::endl;
  vdata.push_back(value);
  
  int currentIndex = vdata.size()-1;
  //cout << currentIndex << std::endl;
  //parent index: 
  //(i-2)/2
  int parentIndex = (currentIndex-1)/2;

  //cout << parentIndex << std::endl;

  while (value < vdata.at(parentIndex)) {//if currentIndex is 0, parentIndex will be < 0 (but should not be an issue)    
    //cout << vdata.at(parentIndex);
    int temp = vdata.at(parentIndex);
    vdata.at(parentIndex) = value;
    vdata.at(currentIndex) = temp;

    currentIndex = parentIndex;
    parentIndex = (currentIndex-1)/2;
  }

  //cout << "pushing " << value << std::endl;
  /*for (auto i : vdata) {
    cout << i << " ";
  }
  cout << std::endl;
  */
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){

  vdata[0] = vdata[vdata.size()-1];
  vdata.pop_back();
  int i=0;
  int minChildIndex;
  while ((i * 2 + 1) < vdata.size()) { 
      if ((i*2+2) >= vdata.size()) {
        minChildIndex = i*2+1;
      } else {
        if (vdata.at(i*2+1) < vdata.at(i*2+2)) {
          minChildIndex = i*2+1;
        } else {
          minChildIndex = i*2+2;
        }
      }

      if (vdata.at(i) > vdata.at(minChildIndex)) {
        int tmp = vdata.at(i);
        vdata.at(i) = vdata.at(minChildIndex);
        vdata.at(minChildIndex) = tmp;
      }
      i = minChildIndex;
  }

}

// Returns the minimum element in the heap
int Heap::top(){
  return vdata[0];
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  return vdata.empty();
}
    