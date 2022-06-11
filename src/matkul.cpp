#include <iostream>
#include <vector>
#include "include/matkul.hpp"


    matkul:: matkul(std::string Nama, std::string id, int sks, std::string Kode):Nama(Nama), id(id), Kode(Kode), sks(sks){}

    std::string matkul::getNama()
    {
    return this->Nama;
    }
    std::string matkul::getId()
    {
    return this->id;
    }
    int matkul::getSKS()
    {
    return this->sks;
    }
    std::string matkul::getKode()
    {
    return this->Kode;
    }
