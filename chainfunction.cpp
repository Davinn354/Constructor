#include <iostream>
using namespace std;
class buku
{
    string judul;

public:
    buku setJdul(string judul)
    {
        this->judul = judul;
        return *this;
    }
    string getJudul()
    {
        return this->judul;
    }
} bukunya;