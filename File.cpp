// File.cpp
#include "./File.h"
#include "./IListable.h"

void File::list(int depth){
  std::cout << depth << std::endl;
}

void File::add(IListable component){
  std::cout << "added" << std::endl;
}

void File::remove(IListable component){
  std::cout << "removed" << std::endl;
}

