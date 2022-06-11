// Folder.h

#include "./IComposableOfListable.h"
#include "./IListable.h"

class Folder : public IComposableOfListable, public IListable{
  public:
    void list(int depth);
};