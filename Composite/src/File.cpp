#ifndef FILECPP
#define FILECPP

// File.cpp
#include <iostream>
#include <string.h>
#include "../include/File.h"
#include "../include/IListable.h"

File::File(char* name){
  strcpy(this->name, name);
}

void File::list(int depth){
  std::cout << depth << std::endl;
}

void File::add(IListable* component){
  std::cout << "added" << std::endl;
}

void File::remove(IListable* component){
  std::cout << "removed" << std::endl;
}

#endif