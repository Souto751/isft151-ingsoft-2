// IComposableOfListable .h

class IComposableOfListable {
  public:
    virtual void add(IListable component) = 0;
    virtual void remove(IListable component) = 0;
};