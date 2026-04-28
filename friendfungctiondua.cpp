#include <iostream>
using namespace std;

class pelajar;
class manusia
{
public:
    void showNilaPelajar(pelajar &x);
};

class pelajar
{
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaPelajar(pelajar &x);
};

void manusia::showNilaPelajar(pelajar &x)
{
    cout << x.nilai;
}
int main()
{
    manusia budi;
    pelajar pbudi;
    budi.showNilaPelajar(pbudi);
    return 0;
}