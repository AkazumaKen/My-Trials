class List{
    public:
    virtual void addHead(int num) = 0;
    virtual void addTail(int num) = 0;
    virtual void addAt(int num, int pos) = 0;
    virtual void RemHead() = 0;
    virtual void RemoveTail() = 0;
    virtual void DeletePos(int pos) = 0;
    virtual int getPos(int pos) = 0;
    virtual void flip() = 0;
    virtual void clear() = 0;
    virtual void print() = 0;

};