#ifndef CONCRETEALIMENTREPOSITORY_H
#define CONCRETEALIMENTREPOSITORY_H
#include "AlimentRepository.h"
#include "aliment.h"
#include <vector>
#include <fstream>

class ConcreteAlimentRepository:public AlimentRepository<Aliment>
{
private:
    std::string fileName;
    std::vector<Aliment> arr;
public:
    ConcreteAlimentRepository();
    std::vector<Aliment> load_from_file();
    Aliment find_aliment_by_name(std::string name);
};

#endif // CONCRETEALIMENTREPOSITORY_H
