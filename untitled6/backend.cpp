#include "backend.h"
BackEnd::BackEnd(QObject *parent) :
    QObject(parent)
{
}

QString BackEnd::cod()
{
    return p_cod;
}


void BackEnd::setCod(const QString &userName)
{
    if (userName == p_cod)
        return;
    qDebug()<<"HELP ME BRO";
    p_cod = userName;
    emit codChanged();
}

QString BackEnd::glicemie()
{
    return p_glicemie;
}

void BackEnd::setGlicemie(const QString &nglicemie)
{
    if(nglicemie == p_glicemie)
        return;
    qDebug()<<"glicehelp";
    p_glicemie = nglicemie;
    emit glicemieChanged();
}

QString BackEnd::searchString()
{
    return p_searchString;
}

void BackEnd::setSearchString(const QString &nsst)
{
    if(nsst== p_searchString)
        return;
    p_searchString = nsst;
    emit searchStringChanged();
}
