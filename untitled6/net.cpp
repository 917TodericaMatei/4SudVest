#include "net.h"

net::net(QObject *parent) : QObject(parent)
{

}

void net::replyFinished(QNetworkReply *reply)
{
    QString ReplyText = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(ReplyText.toUtf8());
    QJsonObject obj = doc.object();
    QJsonValue product = obj.value(QString("product"));
    QJsonObject actual_prod=product.toObject();
    QJsonValue nutriments = actual_prod.value("nutriments");
    QJsonObject nutriments_obj = nutriments.toObject();
    QJsonValue carb = nutriments_obj.value("carbohydrates_100g");
    this->carbs=carb.toDouble();//YES THIS IS IN FACT A RACE CONDITION :)
    qDebug() << "Bid value is" << carb.toDouble();
}

void net::CheckSite(QString url)
{
  QUrl qrl(this->baseUrl+url+".json");
  manager = new QNetworkAccessManager(this);
  connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
  manager->get(QNetworkRequest(qrl));
}
