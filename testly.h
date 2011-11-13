#ifndef TESTLY_H
#define TESTLY_H

#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QtXml/QtXml>
#include <QtXml/QDomDocument>
#include <QDebug>
#include <QMessage>
#include <QMessageService>
#include <QMessageAddress>

namespace Ui {
    class testly;
}
// QtMobility namespace
QTM_USE_NAMESPACE

class testly : public QWidget
{
    Q_OBJECT

public:
    QDomDocument *doc;
    QDomNodeList questions;
    QString title, desc, count, result;
    QList<char> uans, cans;
    QMessage message;
    QMessageService* m_service;
    int qno;
    void loadFile(const QString &fileName);

    explicit testly(QWidget *parent = 0);
    ~testly();

public slots:
    void openClicked();
    void confirmTest();
    void changeQuestion();
    void saveAnswer();
    void finishTest();
private:
    Ui::testly *ui;

private slots:


    void on_pb_sendsms_clicked();
    void on_pb_sendsmsw_clicked();
    void on_pb_reset_clicked();
    void on_pb_next_clicked();
    void on_pb_prev_clicked();
    void on_pb_bchoose_clicked();
    void startTest();
};

#endif // TESTLY_H
