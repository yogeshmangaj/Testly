/********************************************************************************
** Form generated from reading UI file 'testly.ui'
**
** Created: Sun Nov 6 19:18:14 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTLY_H
#define UI_TESTLY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testly
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *w_open;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *pb_choose;
    QLabel *l_fname;
    QPushButton *pb_open;
    QWidget *w_info;
    QVBoxLayout *verticalLayout_3;
    QLabel *l_title;
    QLabel *l_count;
    QLabel *l_desc;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_bchoose;
    QPushButton *pb_start;
    QWidget *w_question;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_qnum;
    QTextBrowser *tb_desc;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *rb_i;
    QRadioButton *rb_1;
    QRadioButton *rb_2;
    QRadioButton *rb_3;
    QRadioButton *rb_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pb_reset;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pb_prev;
    QPushButton *pb_next;
    QWidget *w_result;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QLabel *l_result;
    QLabel *l_percent;
    QPushButton *pb_exit;

    void setupUi(QWidget *testly)
    {
        if (testly->objectName().isEmpty())
            testly->setObjectName(QString::fromUtf8("testly"));
        testly->resize(300, 428);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(testly->sizePolicy().hasHeightForWidth());
        testly->setSizePolicy(sizePolicy);
        testly->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(testly);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        stackedWidget = new QStackedWidget(testly);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        w_open = new QWidget();
        w_open->setObjectName(QString::fromUtf8("w_open"));
        sizePolicy1.setHeightForWidth(w_open->sizePolicy().hasHeightForWidth());
        w_open->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(w_open);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(w_open);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAutoFillBackground(true);
        label->setTextFormat(Qt::RichText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/W_Logo")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setIndent(-4);

        verticalLayout_2->addWidget(label);

        pb_choose = new QPushButton(w_open);
        pb_choose->setObjectName(QString::fromUtf8("pb_choose"));

        verticalLayout_2->addWidget(pb_choose);

        l_fname = new QLabel(w_open);
        l_fname->setObjectName(QString::fromUtf8("l_fname"));
        l_fname->setWordWrap(true);

        verticalLayout_2->addWidget(l_fname);

        pb_open = new QPushButton(w_open);
        pb_open->setObjectName(QString::fromUtf8("pb_open"));
        pb_open->setEnabled(false);

        verticalLayout_2->addWidget(pb_open);

        stackedWidget->addWidget(w_open);
        w_info = new QWidget();
        w_info->setObjectName(QString::fromUtf8("w_info"));
        sizePolicy1.setHeightForWidth(w_info->sizePolicy().hasHeightForWidth());
        w_info->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(w_info);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        l_title = new QLabel(w_info);
        l_title->setObjectName(QString::fromUtf8("l_title"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(l_title->sizePolicy().hasHeightForWidth());
        l_title->setSizePolicy(sizePolicy3);
        l_title->setWordWrap(true);

        verticalLayout_3->addWidget(l_title);

        l_count = new QLabel(w_info);
        l_count->setObjectName(QString::fromUtf8("l_count"));
        sizePolicy3.setHeightForWidth(l_count->sizePolicy().hasHeightForWidth());
        l_count->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(l_count);

        l_desc = new QLabel(w_info);
        l_desc->setObjectName(QString::fromUtf8("l_desc"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(l_desc->sizePolicy().hasHeightForWidth());
        l_desc->setSizePolicy(sizePolicy4);
        l_desc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        l_desc->setWordWrap(true);

        verticalLayout_3->addWidget(l_desc);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pb_bchoose = new QPushButton(w_info);
        pb_bchoose->setObjectName(QString::fromUtf8("pb_bchoose"));

        horizontalLayout->addWidget(pb_bchoose);

        pb_start = new QPushButton(w_info);
        pb_start->setObjectName(QString::fromUtf8("pb_start"));

        horizontalLayout->addWidget(pb_start);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(w_info);
        w_question = new QWidget();
        w_question->setObjectName(QString::fromUtf8("w_question"));
        verticalLayout_5 = new QVBoxLayout(w_question);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        l_qnum = new QLabel(w_question);
        l_qnum->setObjectName(QString::fromUtf8("l_qnum"));

        horizontalLayout_2->addWidget(l_qnum);


        verticalLayout_5->addLayout(horizontalLayout_2);

        tb_desc = new QTextBrowser(w_question);
        tb_desc->setObjectName(QString::fromUtf8("tb_desc"));
        tb_desc->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(tb_desc);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        rb_i = new QRadioButton(w_question);
        rb_i->setObjectName(QString::fromUtf8("rb_i"));
        rb_i->setChecked(true);

        verticalLayout_7->addWidget(rb_i);

        rb_1 = new QRadioButton(w_question);
        rb_1->setObjectName(QString::fromUtf8("rb_1"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(rb_1->sizePolicy().hasHeightForWidth());
        rb_1->setSizePolicy(sizePolicy5);
        rb_1->setMinimumSize(QSize(0, 55));
        rb_1->setMaximumSize(QSize(16777215, 16777215));
        rb_1->setStyleSheet(QString::fromUtf8(" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height: 25px;\n"
" }\n"
"\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"     image: url(:/images/radiobutton_unchecked.png);\n"
" }\n"
"\n"
"\n"
" QRadioButton::indicator::checked {\n"
"     image: url(:/images/radiobutton_checked.png);\n"
" }\n"
""));

        verticalLayout_7->addWidget(rb_1);

        rb_2 = new QRadioButton(w_question);
        rb_2->setObjectName(QString::fromUtf8("rb_2"));
        rb_2->setMinimumSize(QSize(0, 55));
        rb_2->setStyleSheet(QString::fromUtf8(" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height: 25px;\n"
" }\n"
"\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"     image: url(:/images/radiobutton_unchecked.png);\n"
" }\n"
"\n"
"\n"
" QRadioButton::indicator::checked {\n"
"     image: url(:/images/radiobutton_checked.png);\n"
" }\n"
""));

        verticalLayout_7->addWidget(rb_2);

        rb_3 = new QRadioButton(w_question);
        rb_3->setObjectName(QString::fromUtf8("rb_3"));
        rb_3->setMinimumSize(QSize(0, 55));
        rb_3->setStyleSheet(QString::fromUtf8(" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height: 25px;\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"     image: url(:/images/radiobutton_unchecked.png);\n"
" }\n"
"\n"
"\n"
"\n"
" QRadioButton::indicator::checked {\n"
"     image: url(:/images/radiobutton_checked.png);\n"
" }\n"
""));

        verticalLayout_7->addWidget(rb_3);

        rb_4 = new QRadioButton(w_question);
        rb_4->setObjectName(QString::fromUtf8("rb_4"));
        rb_4->setMinimumSize(QSize(0, 55));
        rb_4->setStyleSheet(QString::fromUtf8(" QRadioButton::indicator {\n"
"     width: 25px;\n"
"     height: 25px;\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"     image: url(:/images/radiobutton_unchecked.png);\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"     image: url(:/images/radiobutton_checked.png);\n"
" }\n"
""));

        verticalLayout_7->addWidget(rb_4);


        verticalLayout_5->addLayout(verticalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pb_reset = new QPushButton(w_question);
        pb_reset->setObjectName(QString::fromUtf8("pb_reset"));
        pb_reset->setMaximumSize(QSize(16777215, 55));
        QFont font;
        font.setItalic(true);
        pb_reset->setFont(font);

        horizontalLayout_4->addWidget(pb_reset);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pb_prev = new QPushButton(w_question);
        pb_prev->setObjectName(QString::fromUtf8("pb_prev"));
        pb_prev->setMaximumSize(QSize(16777215, 55));

        horizontalLayout_3->addWidget(pb_prev);

        pb_next = new QPushButton(w_question);
        pb_next->setObjectName(QString::fromUtf8("pb_next"));
        pb_next->setMaximumSize(QSize(16777215, 55));

        horizontalLayout_3->addWidget(pb_next);


        verticalLayout_5->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(w_question);
        w_result = new QWidget();
        w_result->setObjectName(QString::fromUtf8("w_result"));
        verticalLayout_6 = new QVBoxLayout(w_result);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(w_result);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_6->addWidget(label_2);

        l_result = new QLabel(w_result);
        l_result->setObjectName(QString::fromUtf8("l_result"));

        verticalLayout_6->addWidget(l_result);

        l_percent = new QLabel(w_result);
        l_percent->setObjectName(QString::fromUtf8("l_percent"));

        verticalLayout_6->addWidget(l_percent);

        pb_exit = new QPushButton(w_result);
        pb_exit->setObjectName(QString::fromUtf8("pb_exit"));

        verticalLayout_6->addWidget(pb_exit);

        stackedWidget->addWidget(w_result);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_4->addLayout(verticalLayout);


        retranslateUi(testly);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(testly);
    } // setupUi

    void retranslateUi(QWidget *testly)
    {
        testly->setWindowTitle(QApplication::translate("testly", "testly", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pb_choose->setText(QApplication::translate("testly", "Choose test file", 0, QApplication::UnicodeUTF8));
        l_fname->setText(QString());
        pb_open->setText(QApplication::translate("testly", "Open test >>", 0, QApplication::UnicodeUTF8));
        l_title->setText(QApplication::translate("testly", "Title", 0, QApplication::UnicodeUTF8));
        l_count->setText(QApplication::translate("testly", "Count", 0, QApplication::UnicodeUTF8));
        l_desc->setText(QApplication::translate("testly", "Desciption", 0, QApplication::UnicodeUTF8));
        pb_bchoose->setText(QApplication::translate("testly", "<< Back", 0, QApplication::UnicodeUTF8));
        pb_start->setText(QApplication::translate("testly", "Start Test >>", 0, QApplication::UnicodeUTF8));
        l_qnum->setText(QApplication::translate("testly", "TextLabel", 0, QApplication::UnicodeUTF8));
        rb_i->setText(QApplication::translate("testly", "RadioButton", 0, QApplication::UnicodeUTF8));
        rb_1->setText(QApplication::translate("testly", "RadioButton", 0, QApplication::UnicodeUTF8));
        rb_2->setText(QApplication::translate("testly", "RadioButton", 0, QApplication::UnicodeUTF8));
        rb_3->setText(QApplication::translate("testly", "RadioButton", 0, QApplication::UnicodeUTF8));
        rb_4->setText(QApplication::translate("testly", "RadioButton", 0, QApplication::UnicodeUTF8));
        pb_reset->setText(QApplication::translate("testly", "Reset answer", 0, QApplication::UnicodeUTF8));
        pb_prev->setText(QApplication::translate("testly", "<< Previous", 0, QApplication::UnicodeUTF8));
        pb_next->setText(QApplication::translate("testly", "Next >>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("testly", "Results:", 0, QApplication::UnicodeUTF8));
        l_result->setText(QApplication::translate("testly", "TextLabel", 0, QApplication::UnicodeUTF8));
        l_percent->setText(QApplication::translate("testly", "TextLabel", 0, QApplication::UnicodeUTF8));
        pb_exit->setText(QApplication::translate("testly", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testly: public Ui_testly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTLY_H
