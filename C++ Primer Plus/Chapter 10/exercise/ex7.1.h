class Plorg
{
private:
    static const int Len = 19;
    char name[Len];
    int CI;
public:
    Plorg(const char * na = "Plorga", int Ci = 50);
    void Chang_ci(int Ci);
    void show() const;
};