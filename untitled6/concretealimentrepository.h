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
    ConcreteAlimentRepository(std::string);
    Aliment find_aliment_by_name(std::string name);

    std::vector<Aliment> get_all();

    void insert_data(Aliment* data){};

    void delete_data(Aliment* data){};

    void update_data(Aliment* data){};
};

#endif // CONCRETEALIMENTREPOSITORY_H
