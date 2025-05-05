#include <iostream>
#include <string>
using namespace std;

class pelajar;
class manusia{
    public:
    void showNilaiPelajar(pelajar &x);
    void showNilaiPelajar(pelajar &y);
};

class pelajar{
    private:
    int nilai;

    public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaiPelajar(pelajar &x);
};

void manusia::showNilaiPelajar(pelajar &x){
    cout << x.nilai;
}
// void manusia::showNilaiPelajarDua(pelajar &y){
//{
// cout << y.nilai;
//}

int main(){
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
}