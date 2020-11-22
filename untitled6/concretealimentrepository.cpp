#include "concretealimentrepository.h"

ConcreteAlimentRepository::ConcreteAlimentRepository()
{

}

ConcreteAlimentRepository::ConcreteAlimentRepository(std::string name)
{
    this->fileName = name;
}
std::vector<Aliment> ConcreteAlimentRepository::get_all() {
    std::fstream file;
    file.open(fileName, std::ios::out | std::ios::in | std::ios::app);
    if (file.is_open()) {
        while (!file.eof()) {

            Aliment aliment;
            file >> aliment;
            arr.push_back(aliment);
        }
    }
    file.close();
    return arr;
}

Aliment ConcreteAlimentRepository:: find_aliment_by_name(std::string name){
    for(int i=0;i<int(arr.size());i++){
        if(arr[i].getName()==name)
            return arr[i];
    }
}
