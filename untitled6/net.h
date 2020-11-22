#ifndef NET_H
#define NET_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
class net : public QObject
{
    Q_OBJECT
    QNetworkAccessManager *manager;
public:
    explicit net(QObject *parent = nullptr);
    QString baseUrl = "https://world.openfoodfacts.org/api/v0/product/";
    double carbs=0.0F;
private slots:
    void replyFinished(QNetworkReply *);
public:
    void CheckSite(QString url);
signals:

};

#endif // NET_H
