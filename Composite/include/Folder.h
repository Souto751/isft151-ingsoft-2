#ifndef FOLDERH
#define FOLDERH

// Folder.h

#include "./IComposableOfListable.h"
#include "./IListable.h"

class Folder : public IComposableOfListable, public IListable{
  private:
    char* name;
  public:
    Folder(char* name);
    void list(int depth);
    void add(IListable* component);
    void remove(IListable* component);
};

#endif