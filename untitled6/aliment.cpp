#include "aliment.h"

Aliment::Aliment()
{
    this->glucide=0;
    //this->id=0;
}

Aliment::Aliment(double glucide){
    this->glucide=glucide;
}

//setters
void Aliment::setName(std::string newName){
     this->name=newName;
}

void Aliment::setGlucide(double newGlucide){
    this->glucide=newGlucide;
}

//getters
std::string Aliment::getName(){
     return this->name;
}
double Aliment::getGlucide(){
   return  this->glucide;
}

std::istream& operator >> (std::istream& is, Aliment& aliment) {
    std::string name,glucide;
    is>>name;
    is>>glucide;

    aliment.setName(name);
    aliment.setGlucide(atof(glucide.c_str()));
    return is;
}
