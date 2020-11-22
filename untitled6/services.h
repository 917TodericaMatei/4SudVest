#ifndef SERVICES_H
#define SERVICES_H

#include <QObject>
#include <QDebug>
#include <backend.h>
#include <net.h>
#include "concretealimentrepository.h"
class services: public QObject
{
    Q_OBJECT
public:
    services(BackEnd *backend);
    net network;
public slots:
    void search(QString searchString);
    void codChanged(QString tempst);
    void glicemieStartChanged(QString tempst);
    void glicemieStopChanged(QString tempst);
//    void glicemieCurentaChanged(QString tempst);
};

#endif // SERVICES_H
