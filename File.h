// File.h
#include "./IListable.h"

class File : public IListable{
  public:
    void list(int depth);
    void add(IListable component);
    void remove(IListable component);
};

