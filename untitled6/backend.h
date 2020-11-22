#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QString>
#include <qqml.h>
#include <QDebug>
class BackEnd : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString cod READ cod WRITE setCod NOTIFY codChanged)
    Q_PROPERTY(QString glicemieStart READ glicemieStart WRITE setGlicemieStart NOTIFY glicemieStartChanged)
    Q_PROPERTY(QString glicemieStop READ glicemieStop WRITE setGlicemieStop NOTIFY glicemieStopChanged)
    Q_PROPERTY(QString glicemieCurenta READ glicemieCurenta WRITE setGlicemieCurenta NOTIFY glicemieCurentaChanged)
    Q_PROPERTY(QString searchString READ searchString WRITE setSearchString NOTIFY searchStringChanged)

public:
    explicit BackEnd(QObject *parent = nullptr);

    QString cod();
    void setCod(const QString &userName);

    QString glicemieStart();
    void setGlicemieStart(const QString &nglicemie);
    QString glicemieStop();
    void setGlicemieStop(const QString &nglicemie);
    QString glicemieCurenta();
    void setGlicemieCurenta(const QString &nglicemie);

    QString searchString();
    void setSearchString(const QString &nsst);

signals:
    void codChanged(QString tempst);
    void glicemieStartChanged(QString tempst);
    void glicemieStopChanged(QString tempst);
    void glicemieCurentaChanged(QString tempst);
    void searchStringChanged(QString tempst);

private:
    QString p_cod;
    QString p_glicemieStart;
    QString p_glicemieStop;
    QString p_glicemieCurenta;
    QString p_searchString;
};

#endif // BACKEND_H
