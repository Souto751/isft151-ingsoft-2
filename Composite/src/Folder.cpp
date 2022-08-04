#ifndef FOLDERCPP
#define FOLDERCPP

// Folder.cpp
#include <iostream>
#include <string.h>
#include "../include/Folder.h"
#include "../include/IListable.h"

Folder::Folder(char* name){
  strcpy(this->name, name);
}

void Folder::list(int depth){
  std::cout << depth << std::endl;
}

void Folder::add(IListable* component){
  std::cout << "added" << std::endl;
}

void Folder::remove(IListable* component){
  std::cout << "removed" << std::endl;
}

#endif