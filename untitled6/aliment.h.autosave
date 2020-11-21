#ifndef ALIMENT_H
#define ALIMENT_H
#include <string>
#include <ostream>
class Aliment
{
private:
    int id;
    std::string name;
    double glucide;

public:
    Aliment();
    Aliment(std::string,double);
    void setName(std::string);
    void setGlucide(double);

    std::string getName();
    double getGlucide();

    friend std::istream& operator >>(std::istream& , Aliment& );
};

#endif // ALIMENT_H
