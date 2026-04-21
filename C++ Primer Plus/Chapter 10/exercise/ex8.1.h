#ifndef EX8_H_
#define EX8_H_

typedef double Item;

class List
{
private:
    static const int Len = 4;
    Item items[Len];
    int top;
public:
    List();
    void add(Item & item);
    bool isempty() const;
    bool isfull() const;
    void visit(void (*pf) (Item &));
    void show() const;
};

#endif