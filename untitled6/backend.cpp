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
    emit codChanged(userName);
}

QString BackEnd::glicemieStart()
{
    return p_glicemieStart;
}

void BackEnd::setGlicemieStart(const QString &nglicemie)
{
    if(nglicemie == p_glicemieStart)
        return;
    qDebug()<<"glicehelp";
    p_glicemieStart = nglicemie;
    emit glicemieStartChanged(nglicemie);
}

QString BackEnd::glicemieStop()
{
    return p_glicemieStop;
}

void BackEnd::setGlicemieStop(const QString &nglicemie)
{
    if(nglicemie == p_glicemieStop)
        return;
    qDebug()<<"glicehelp";
    p_glicemieStop = nglicemie;
    emit glicemieStopChanged(nglicemie);
}

QString BackEnd::glicemieCurenta()
{
    return p_glicemieCurenta;
}

void BackEnd::setGlicemieCurenta(const QString &nglicemie)
{
    if(nglicemie == p_glicemieCurenta)
        return;
    qDebug()<<"glicehelp";
    p_glicemieCurenta = nglicemie;
    emit glicemieCurentaChanged(nglicemie);
}
QString BackEnd::searchString()
{
    return p_searchString;

}

void BackEnd::setSearchString(const QString &nsst)
{
    if(nsst== p_searchString)
        return;
    qDebug()<<"merge";
    p_searchString = nsst;
    emit searchStringChanged(nsst);
}
