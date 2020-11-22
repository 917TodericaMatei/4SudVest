#include "services.h"

services::services(BackEnd *backend)
{
    QObject::connect(backend,SIGNAL(searchStringChanged(QString)),this,SLOT(search(QString)));
    QObject::connect(backend,SIGNAL(codChanged(QString)),this,SLOT(codChanged(QString)));
}

void services::search(QString searchString)
{
    AlimentRepository<Aliment>* user_repository = new ConcreteAlimentRepository("DataAlimente");
    Aliment alim = user_repository->find_aliment_by_name("Snikers");
}

void services::codChanged(QString searchString)
{
    qDebug()<<searchString;
}
