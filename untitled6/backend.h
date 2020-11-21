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
    Q_PROPERTY(QString glicemie READ glicemie WRITE setGlicemie NOTIFY glicemieChanged)
    Q_PROPERTY(QString searchString READ searchString WRITE setSearchString NOTIFY searchStringChanged)

public:
    explicit BackEnd(QObject *parent = nullptr);

    QString cod();
    void setCod(const QString &userName);

    QString glicemie();
    void setGlicemie(const QString &nglicemie);

    QString searchString();
    void setSearchString(const QString &nsst);

signals:
    void codChanged();
    void glicemieChanged();
    void searchStringChanged();

private:
    QString p_cod;
    QString p_glicemie;
    QString p_searchString;
};

#endif // BACKEND_H
