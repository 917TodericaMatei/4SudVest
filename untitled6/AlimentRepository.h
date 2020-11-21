#ifndef ALIMENTREPOSITORY_H
#define ALIMENTREPOSITORY_H
#include <string>
#include <BaseRepository.h>
template <typename T>
class AlimentRepository :public BaseRepository<T> {
    //Class for operation for users
public:
    virtual T find_aliment_by_name(std::string name)= 0;
};
#endif // ALIMENTREPOSITORY_H
