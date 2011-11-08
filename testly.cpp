#include "testly.h"
#include "ui_testly.h"

testly::testly(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testly)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_Maemo5PortraitOrientation,true);
    doc = new QDomDocument;
    ui->rb_i->setVisible(false);
    //Signals
    connect(ui->pb_choose,SIGNAL(clicked()),this,SLOT(openClicked()));
    connect(ui->pb_open,SIGNAL(clicked()),this,SLOT(confirmTest()));
    connect(ui->pb_start,SIGNAL(clicked()),this,SLOT(startTest()));
    connect(ui->rb_1,SIGNAL(toggled(bool)),this,SLOT(saveAnswer()));
    connect(ui->rb_2,SIGNAL(toggled(bool)),this,SLOT(saveAnswer()));
    connect(ui->rb_3,SIGNAL(toggled(bool)),this,SLOT(saveAnswer()));
    connect(ui->rb_4,SIGNAL(toggled(bool)),this,SLOT(saveAnswer()));
    connect(ui->pb_exit,SIGNAL(clicked()),this,SLOT(close()));
}

void testly::openClicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Test"), "/", tr("XML (*.xml)"));
    if (!fileName.isEmpty())
    {
        loadFile(fileName);
        ui->l_fname->setText(fileName);
        ui->pb_open->setEnabled(true);
    }


}

void testly::loadFile(const QString &fileName)
{
    QFile file(fileName);


    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("Application"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        return;
    }
    else
    {
        if(!doc->setContent(&file))
        {
            QMessageBox::warning(this, tr("Application"),
                                 tr("Cannot read file %1:\n%2.")
                                 .arg(fileName)
                                 .arg(file.errorString()));
            return;
        } file.close();
    }


}

void testly::confirmTest()
{
    title = doc->firstChild().firstChildElement().text();
    desc = doc->firstChild().firstChild().nextSiblingElement().text();
    count = doc->firstChildElement().attribute("count");

    ui->l_title->setText("<b>"+title+"</b>");
    ui->l_desc->setText("Test description:<br>"+desc);
    ui->l_count->setText("No. of questions: "+count);
    ui->stackedWidget->setCurrentIndex(1);

    for(int i=0;i<count.toInt();i++)
    {
        uans.append('0');
        cans.append(* doc->elementsByTagName("answer").at(i).toElement().text().toUtf8().constData());

    }

}

void testly::on_pb_bchoose_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void testly::startTest()
{
    questions = doc->elementsByTagName("question");
    qno=0;
    ui->stackedWidget->setCurrentIndex(2);
    changeQuestion();


}

void testly::changeQuestion()
{
    if(uans[qno]=='0')
        ui->rb_i->setChecked(true);
    else if(uans[qno]=='a')
        ui->rb_1->setChecked(true);
    else if(uans[qno]=='b')
        ui->rb_2->setChecked(true);
    else if(uans[qno]=='c')
        ui->rb_3->setChecked(true);
    else if(uans[qno]=='d')
        ui->rb_4->setChecked(true);
    ui->l_qnum->setText(tr("Question: ")+QString::number(qno+1)+tr("/")+count);
    ui->tb_desc->setText(questions.at(qno).firstChildElement().text());
    ui->rb_1->setText(questions.at(qno).childNodes().at(1).toElement().text());
    ui->rb_2->setText(questions.at(qno).childNodes().at(2).toElement().text());
    ui->rb_3->setText(questions.at(qno).childNodes().at(3).toElement().text());
    ui->rb_4->setText(questions.at(qno).childNodes().at(4).toElement().text());

    if(qno+1==count.toInt())
        ui->pb_next->setText("Finish test");
    else
        ui->pb_next->setText("Next >>");

    if(qno==0)
        ui->pb_prev->setEnabled(false);
    else
        ui->pb_prev->setEnabled(true);


}

void testly::saveAnswer()
{
    if(ui->rb_1->isChecked())
        uans[qno]='a';
    else if(ui->rb_2->isChecked())
        uans[qno]='b';
    else if(ui->rb_3->isChecked())
        uans[qno]='c';
    else if(ui->rb_4->isChecked())
        uans[qno]='d';
    else if(ui->rb_i->isChecked())
        uans[qno]='0';

}


void testly::finishTest()
{
    int i,r=0;
    for(i=0;i<count.toInt();i++)
    {
        if(uans[i]==cans[i])
            r++;
    }
    ui->l_result->setText(tr("<h2>")+QString::number(r)+tr("/")+count+tr("</h2>"));
    ui->l_percent->setText(tr("<h2>")+QString::number((100*r)/(count.toInt()))+tr("%</h2>"));
    ui->stackedWidget->setCurrentIndex(3);

}

testly::~testly()
{
    delete ui;
}


void testly::on_pb_prev_clicked()
{
    if(qno!=0)
    {
        qno--;
        changeQuestion();
    }
}

void testly::on_pb_next_clicked()
{
    if(qno+1<(count.toInt()))
    {
        qno++;
        changeQuestion();
    }
    else if(qno+1==count.toInt())
    {
        finishTest();
    }
}



void testly::on_pb_reset_clicked()
{
    ui->rb_i->setChecked(true);
    saveAnswer();
}
