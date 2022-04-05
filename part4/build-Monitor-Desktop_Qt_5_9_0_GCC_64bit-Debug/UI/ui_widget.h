/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *sysInfoPage;
    QFrame *sysframe;
    QLabel *host_namelabel;
    QLabel *start_timelabel;
    QLabel *run_timelabel;
    QLabel *host_msglabel;
    QLabel *start_msglabel;
    QLabel *run_msglabel;
    QFrame *cpuframe;
    QLabel *cpu_namelabel;
    QLabel *cpu_frenamelabel;
    QLabel *ed_namelabel;
    QLabel *cpu_msglabel;
    QLabel *cpu_fremsglabel;
    QLabel *ed_msglabel;
    QWidget *funcInfoPage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QWidget *meminfotab;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_13;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QWidget *procInfoPage;
    QTableWidget *tableWidget;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_8;
    QPushButton *pushButton_4;
    QWidget *tab;
    QTextEdit *editfiletext;
    QPushButton *openfile;
    QPushButton *createfile;
    QPushButton *savefile;
    QWidget *tipPage;
    QFrame *frame_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(563, 410);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font;
        font.setPointSize(11);
        tabWidget->setFont(font);
        sysInfoPage = new QWidget();
        sysInfoPage->setObjectName(QStringLiteral("sysInfoPage"));
        sysframe = new QFrame(sysInfoPage);
        sysframe->setObjectName(QStringLiteral("sysframe"));
        sysframe->setGeometry(QRect(9, 10, 501, 128));
        sysframe->setFont(font);
        sysframe->setFrameShape(QFrame::Box);
        sysframe->setFrameShadow(QFrame::Sunken);
        host_namelabel = new QLabel(sysframe);
        host_namelabel->setObjectName(QStringLiteral("host_namelabel"));
        host_namelabel->setGeometry(QRect(20, 10, 100, 30));
        start_timelabel = new QLabel(sysframe);
        start_timelabel->setObjectName(QStringLiteral("start_timelabel"));
        start_timelabel->setGeometry(QRect(20, 45, 105, 30));
        run_timelabel = new QLabel(sysframe);
        run_timelabel->setObjectName(QStringLiteral("run_timelabel"));
        run_timelabel->setGeometry(QRect(20, 80, 105, 30));
        host_msglabel = new QLabel(sysframe);
        host_msglabel->setObjectName(QStringLiteral("host_msglabel"));
        host_msglabel->setGeometry(QRect(170, 10, 300, 30));
        start_msglabel = new QLabel(sysframe);
        start_msglabel->setObjectName(QStringLiteral("start_msglabel"));
        start_msglabel->setGeometry(QRect(170, 45, 300, 30));
        run_msglabel = new QLabel(sysframe);
        run_msglabel->setObjectName(QStringLiteral("run_msglabel"));
        run_msglabel->setGeometry(QRect(170, 80, 300, 30));
        cpuframe = new QFrame(sysInfoPage);
        cpuframe->setObjectName(QStringLiteral("cpuframe"));
        cpuframe->setGeometry(QRect(10, 150, 501, 128));
        cpuframe->setFont(font);
        cpuframe->setFrameShape(QFrame::Box);
        cpuframe->setFrameShadow(QFrame::Sunken);
        cpu_namelabel = new QLabel(cpuframe);
        cpu_namelabel->setObjectName(QStringLiteral("cpu_namelabel"));
        cpu_namelabel->setGeometry(QRect(20, 10, 100, 30));
        cpu_frenamelabel = new QLabel(cpuframe);
        cpu_frenamelabel->setObjectName(QStringLiteral("cpu_frenamelabel"));
        cpu_frenamelabel->setGeometry(QRect(20, 45, 105, 30));
        ed_namelabel = new QLabel(cpuframe);
        ed_namelabel->setObjectName(QStringLiteral("ed_namelabel"));
        ed_namelabel->setGeometry(QRect(20, 80, 105, 30));
        cpu_msglabel = new QLabel(cpuframe);
        cpu_msglabel->setObjectName(QStringLiteral("cpu_msglabel"));
        cpu_msglabel->setGeometry(QRect(170, 10, 300, 30));
        cpu_fremsglabel = new QLabel(cpuframe);
        cpu_fremsglabel->setObjectName(QStringLiteral("cpu_fremsglabel"));
        cpu_fremsglabel->setGeometry(QRect(170, 45, 300, 30));
        ed_msglabel = new QLabel(cpuframe);
        ed_msglabel->setObjectName(QStringLiteral("ed_msglabel"));
        ed_msglabel->setGeometry(QRect(170, 80, 300, 30));
        tabWidget->addTab(sysInfoPage, QString());
        funcInfoPage = new QWidget();
        funcInfoPage->setObjectName(QStringLiteral("funcInfoPage"));
        verticalLayoutWidget = new QWidget(funcInfoPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-20, 40, 571, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(funcInfoPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 101, 17));
        tabWidget->addTab(funcInfoPage, QString());
        meminfotab = new QWidget();
        meminfotab->setObjectName(QStringLiteral("meminfotab"));
        meminfotab->setFont(font);
        label_9 = new QLabel(meminfotab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 67, 17));
        label_10 = new QLabel(meminfotab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 30, 91, 41));
        label_11 = new QLabel(meminfotab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 70, 91, 41));
        label_12 = new QLabel(meminfotab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 210, 91, 41));
        label_14 = new QLabel(meminfotab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 170, 91, 41));
        label_13 = new QLabel(meminfotab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 150, 71, 21));
        label_13->setFont(font);
        label_13->setFrameShadow(QFrame::Plain);
        label_13->setLineWidth(1);
        label_13->setScaledContents(false);
        verticalLayoutWidget_2 = new QWidget(meminfotab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(90, -30, 471, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(meminfotab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(90, 130, 471, 199));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_4 = new QWidget(meminfotab);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(-10, 0, 131, 291));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(meminfotab, QString());
        verticalLayoutWidget_2->raise();
        verticalLayoutWidget_3->raise();
        verticalLayoutWidget_4->raise();
        label_9->raise();
        label_14->raise();
        label_12->raise();
        label_13->raise();
        label_11->raise();
        label_10->raise();
        procInfoPage = new QWidget();
        procInfoPage->setObjectName(QStringLiteral("procInfoPage"));
        tableWidget = new QTableWidget(procInfoPage);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(4, 4, 509, 238));
        label_7 = new QLabel(procInfoPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 250, 101, 30));
        pushButton = new QPushButton(procInfoPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 248, 89, 35));
        label_8 = new QLabel(procInfoPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 250, 101, 30));
        pushButton_4 = new QPushButton(procInfoPage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 248, 89, 35));
        tabWidget->addTab(procInfoPage, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        editfiletext = new QTextEdit(tab);
        editfiletext->setObjectName(QStringLiteral("editfiletext"));
        editfiletext->setGeometry(QRect(100, 10, 411, 271));
        openfile = new QPushButton(tab);
        openfile->setObjectName(QStringLiteral("openfile"));
        openfile->setGeometry(QRect(0, 10, 89, 25));
        createfile = new QPushButton(tab);
        createfile->setObjectName(QStringLiteral("createfile"));
        createfile->setGeometry(QRect(0, 50, 89, 25));
        savefile = new QPushButton(tab);
        savefile->setObjectName(QStringLiteral("savefile"));
        savefile->setGeometry(QRect(0, 90, 89, 25));
        tabWidget->addTab(tab, QString());
        tipPage = new QWidget();
        tipPage->setObjectName(QStringLiteral("tipPage"));
        frame_2 = new QFrame(tipPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 521, 291));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 481, 261));
        QFont font1;
        font1.setPointSize(22);
        label_5->setFont(font1);
        tabWidget->addTab(tipPage, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\347\263\273\347\273\237\350\265\204\346\272\220\347\233\221\346\216\247\345\231\250", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\345\214\227\344\272\254\346\227\266\351\227\264:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sysInfoPage->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        sysInfoPage->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        host_namelabel->setText(QApplication::translate("Widget", "\344\270\273\346\234\272\345\220\215\357\274\232", Q_NULLPTR));
        start_timelabel->setText(QApplication::translate("Widget", "\347\263\273\347\273\237\345\220\257\345\212\250\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        run_timelabel->setText(QApplication::translate("Widget", "\347\263\273\347\273\237\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        host_msglabel->setText(QString());
        start_msglabel->setText(QString());
        run_msglabel->setText(QString());
        cpu_namelabel->setText(QApplication::translate("Widget", "CPU\345\236\213\345\217\267\357\274\232", Q_NULLPTR));
        cpu_frenamelabel->setText(QApplication::translate("Widget", "CPU\344\270\273\351\242\221\357\274\232", Q_NULLPTR));
        ed_namelabel->setText(QApplication::translate("Widget", "\347\263\273\347\273\237\347\211\210\346\234\254\345\217\267\357\274\232", Q_NULLPTR));
        cpu_msglabel->setText(QString());
        cpu_fremsglabel->setText(QString());
        ed_msglabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(sysInfoPage), QApplication::translate("Widget", "\347\263\273\347\273\237\344\277\241\346\201\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "CPU\344\275\277\347\224\250\347\216\207:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(funcInfoPage), QApplication::translate("Widget", "\345\244\204\347\220\206\345\231\250\344\277\241\346\201\257", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\345\206\205\345\255\230", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", "   IO\347\231\276\345\210\206\346\257\224:", Q_NULLPTR));
        label_14->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        label_13->setText(QApplication::translate("Widget", "\347\243\201\347\233\230", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(meminfotab), QApplication::translate("Widget", "\345\206\205\345\255\230\344\277\241\346\201\257", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\350\277\220\350\241\214\346\225\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\347\273\223\346\235\237\350\277\233\347\250\213", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\347\235\241\347\234\240\346\225\260\357\274\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "\345\210\267\346\226\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(procInfoPage), QApplication::translate("Widget", "\345\220\216\345\217\260\350\277\233\347\250\213", Q_NULLPTR));
        openfile->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", Q_NULLPTR));
        createfile->setText(QApplication::translate("Widget", "\346\226\260\345\273\272", Q_NULLPTR));
        savefile->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\347\256\200\346\230\223\346\226\207\344\273\266", Q_NULLPTR));
        label_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tipPage), QApplication::translate("Widget", "\350\257\264\346\230\216", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "CPU\344\275\277\347\224\250:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\206\205\345\255\230\344\275\277\347\224\250:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
