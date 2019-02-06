#include "ArrayStack.h"
#include "utils.h"

namespace ods {

template ArrayStack<int>::ArrayStack();
template ArrayStack<int>::~ArrayStack();
template void ArrayStack<int>::add(int,int);
template int ArrayStack<int>::remove(int);

template ArrayStack<int*>::ArrayStack();
template ArrayStack<int*>::~ArrayStack();
template void ArrayStack<int*>::add(int,int*);
template int* ArrayStack<int*>::remove(int);

}
