#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__


#include <iostream>
#include <vector>

class matkul{
private:
    int sks;
    std::string Nama;
    std::string id;
    std::string Kode;

public:
    matkul(std::string Nama, std::string id, int sks, std::string Kode);

    std::string getNama();
    std::string getId();
    int getSKS();
    std::string getKode();

};

#endif