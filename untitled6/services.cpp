#include "services.h"

services::services(BackEnd *backend)
{
    QObject::connect(backend,SIGNAL(searchStringChanged(QString)),this,SLOT(search(QString)));
    QObject::connect(backend,SIGNAL(codChanged(QString)),this,SLOT(codChanged(QString)));
    QObject::connect(backend,SIGNAL(glicemieStartChanged(QString)),this,SLOT(glicemieStartChanged(QString)));
    QObject::connect(backend,SIGNAL(glicemieStopChanged(QString)),this,SLOT(glicemieStopChanged(QString)));
}

void services::search(QString searchString)
{
//    AlimentRepository<Aliment>* user_repository = new ConcreteAlimentRepository("DataAlimente");
//    Aliment alim = user_repository->find_aliment_by_name("Snikers");
}

void services::codChanged(QString searchString)
{
    network.CheckSite(searchString);
//    qDebug()<<searchString;
    qDebug()<<network.carbs;//YES THIS IS A RACE CONDITION :)
}

void services::glicemieStartChanged(QString searchString)
{
    qDebug()<<searchString;
}
void services::glicemieStopChanged(QString searchString)
{
    qDebug()<<searchString;
}
