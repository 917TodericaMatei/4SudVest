#include "net.h"

net::net(QObject *parent) : QObject(parent)
{

}

void net::replyFinished(QNetworkReply *reply)
{
    QString ReplyText = reply->readAll();
    // qDebug() << ReplyText;
    // ask doc to parse it
    QJsonDocument doc = QJsonDocument::fromJson(ReplyText.toUtf8());
    // we know first element in file is object, to try to ask for such
    QJsonObject obj = doc.object();
    // ask object for value
    QJsonValue product = obj.value(QString("product"));
    QJsonObject actual_prod=product.toObject();
    QJsonValue nutriments = actual_prod.value("nutriments");
    QJsonObject nutriments_obj = nutriments.toObject();
    QJsonValue carb = nutriments_obj.value("carbohydrates_100g");
    qDebug() << "Bid value is" << carb.toDouble();
}

void net::CheckSite(QString url)
{
  QUrl qrl(this->baseUrl+url+".json");
  manager = new QNetworkAccessManager(this);
  connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
  manager->get(QNetworkRequest(qrl));
}
