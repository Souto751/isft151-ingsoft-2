#ifndef FILEH
#define FILEH

// File.h
#include "./IListable.h"

class File : public IListable{
  private:
    char* name;
  public:
    File(char* name);
    void list(int depth);
    void add(IListable* component);
    void remove(IListable* component);
};

#endif