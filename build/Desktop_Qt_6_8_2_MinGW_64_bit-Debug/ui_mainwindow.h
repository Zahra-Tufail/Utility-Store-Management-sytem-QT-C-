/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_7;
    QLabel *label_24;
    QLabel *label_2;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_28;
    QTableWidget *tableWidget;
    QLabel *label_27;
    QLabel *label_15;
    QWidget *page_2;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *page_3;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_56;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 761, 581));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-10, 0, 241, 581));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(20);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background: #150a4a;\n"
"border: 0.5px solid black;"));
        label_3->setWordWrap(false);
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 0, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(22);
        font1.setBold(true);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 30, 121, 111));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/Group 46.png")));
        label_5->setWordWrap(false);
        label_5->setOpenExternalLinks(false);
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(120, 60, 61, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_14 = new QLabel(page);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 150, 51, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_16 = new QLabel(page);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(60, 180, 71, 41));
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_17 = new QLabel(page);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 220, 81, 41));
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_18 = new QLabel(page);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(60, 250, 141, 41));
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_19 = new QLabel(page);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(60, 380, 51, 31));
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_20 = new QLabel(page);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(60, 320, 91, 21));
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_21 = new QLabel(page);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(60, 280, 91, 41));
        label_21->setFont(font3);
        label_21->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_22 = new QLabel(page);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(10, 340, 61, 41));
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_23 = new QLabel(page);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(60, 410, 81, 31));
        label_23->setFont(font3);
        label_23->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 450, 181, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setBold(true);
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("    background-color: #fe0000;  /* Dark blue background */\n"
"    color: white;  /* White text */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    border-radius: 10px;  /* Rounded corners */\n"
"    padding: 10px 55px;  /* Padding inside button */\n"
"    border: none; "));
        label_24 = new QLabel(page);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(-10, 480, 241, 91));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/image 1.png")));
        label_24->setWordWrap(true);
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 20, 471, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(14);
        font5.setBold(false);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("  border-radius: 10px; \n"
"background: white;\n"
"  padding: 10px 160px; "));
        label_25 = new QLabel(page);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(250, 20, 151, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Times New Roman")});
        font6.setPointSize(12);
        label_25->setFont(font6);
        label_25->setStyleSheet(QString::fromUtf8("  border-radius: 10px; \n"
"    background-color: #1E3A8A; \n"
"color: white;\n"
""));
        label_26 = new QLabel(page);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(260, 70, 131, 31));
        label_26->setFont(font4);
        label_26->setStyleSheet(QString::fromUtf8("    background-color: #1E3A8A;  /* Dark blue background */\n"
"    color: white;  /* White text */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    border-radius: 10px;  /* Rounded corners */\n"
"    padding: 10px 35px;  /* Padding inside button */\n"
"    border: none; "));
        label_28 = new QLabel(page);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(600, 70, 121, 31));
        label_28->setFont(font4);
        label_28->setStyleSheet(QString::fromUtf8("background: #ffc20f;\n"
" color: white;  /* White text */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    border-radius: 10px;  /* Rounded corners */\n"
"    padding: 10px 40px;  /* Padding inside button */\n"
"    border: none; "));
        tableWidget = new QTableWidget(page);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QBrush brush(QColor(21, 10, 74, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font7);
        __qtablewidgetitem->setBackground(QColor(255, 255, 255));
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QBrush brush1(QColor(21, 10, 74, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font7);
        __qtablewidgetitem1->setBackground(QColor(255, 255, 255));
        __qtablewidgetitem1->setForeground(brush1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QBrush brush2(QColor(21, 10, 74, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font7);
        __qtablewidgetitem2->setBackground(QColor(255, 255, 255));
        __qtablewidgetitem2->setForeground(brush2);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 12)
            tableWidget->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(7, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(8, 2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(9, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(9, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(9, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(10, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(10, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(10, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(11, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(11, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(11, 2, __qtablewidgetitem50);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(260, 110, 461, 401));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Times New Roman")});
        font8.setPointSize(13);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setUnderline(false);
        tableWidget->setFont(font8);
        tableWidget->setMouseTracking(false);
        tableWidget->setTabletTracking(false);
        tableWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        tableWidget->setAutoFillBackground(false);
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"   background: #150a4a; /* Header background (gold color) */\n"
"color: #ffc20f; /* Text color */\n"
"    font-size: 14px;  /* Font size */\n"
"    font-weight: bold;  /* Bold font */\n"
"    padding: 5px;  /* Padding */\n"
"    border: 1px solid black;  /* Border */\n"
"}"));
        tableWidget->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        tableWidget->setAutoScrollMargin(16);
        tableWidget->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
        label_27 = new QLabel(page);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(680, 30, 21, 21));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/search_4398568.png")));
        label_27->setScaledContents(true);
        label_15 = new QLabel(page);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(-10, 0, 811, 571));
        label_15->setTabletTracking(false);
        label_15->setStyleSheet(QString::fromUtf8("background:#e3edf9;"));
        label_15->setFrameShape(QFrame::Shape::Box);
        stackedWidget->addWidget(page);
        label_15->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_14->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        label_7->raise();
        label_24->raise();
        label_2->raise();
        label_25->raise();
        label_26->raise();
        label_28->raise();
        tableWidget->raise();
        label_27->raise();
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 741, 551));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/dual-yellow-blue-background-writing-text.jpg")));
        label->setScaledContents(true);
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(220, 50, 351, 401));
        frame_2->setStyleSheet(QString::fromUtf8(" background: rgba(247, 227, 174, 0.4);  /* Semi-transparent */\n"
"    border-radius: 20px; /* Smooth rounded corners */\n"
"border:1px solid #c9a25e ;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(100, 140, 141, 41));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Times New Roman")});
        font9.setPointSize(22);
        font9.setBold(true);
        font9.setItalic(false);
        label_8->setFont(font9);
        label_8->setStyleSheet(QString::fromUtf8(" border-radius: 10px; /* Rounded corners */\n"
"    padding: 5px 20px;\n"
"background:transparent;\n"
"border: none;\n"
"color:#1E3A8A; "));
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(30, 190, 281, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8(" background: rgba(255,255,255, 0.4);  /* Semi-transparent white */\n"
"    border: 1px solid rgba(255, 255, 255, 0.5); /* Soft white border */\n"
"    border-radius: 15px;  /* Rounded corners */\n"
"    padding: 10px;\n"
"    color: black;/* White text */\n"
"    font-size: 16px;\n"
"QLineEdit::placeholder {\n"
"    color: rgba(255, 255, 255, 1);  /* Adjust transparency for visibility */\n"
"    font-size: 16px;\n"
"\n"
"}"));
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(30, 250, 281, 41));
        lineEdit_4->setStyleSheet(QString::fromUtf8(" background: rgba(255,255,255, 0.4);  /* Semi-transparent white */\n"
"    border: 1px solid rgba(255, 255, 255, 0.5); /* Soft white border */\n"
"    border-radius: 15px;  /* Rounded corners */\n"
"    padding: 10px;\n"
"    color:black; /* White text */\n"
"    font-size: 16px;\n"
"QLineEdit::placeholder {\n"
"    color: rgba(255, 255, 255, 1);  /* Adjust transparency for visibility */\n"
"    font-size: 16px;\n"
"\n"
"}"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 320, 201, 41));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Times New Roman")});
        font10.setBold(true);
        pushButton_2->setFont(font10);
        pushButton_2->setStyleSheet(QString::fromUtf8("background: #ffc20f;\n"
"    border: none;\n"
"    border-radius: 15px;\n"
"    padding: 10px;\n"
"    font-size: 16px;\n"
"    color:#1E3A8A; \n"
"hover {\n"
"    background: rgba(255, 100, 100, 1);\n"
"}"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(140, 10, 71, 71));
        label_9->setStyleSheet(QString::fromUtf8("\n"
"border: none;\n"
" background: transparent;"));
        label_9->setPixmap(QPixmap(QString::fromUtf8("C:/Qt/pictures/user_1077063.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 190, 41, 41));
        label_10->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_10->setPixmap(QPixmap(QString::fromUtf8("C:/Qt/pictures/lock_3039483.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(270, 250, 41, 41));
        label_11->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_11->setPixmap(QPixmap(QString::fromUtf8("C:/Qt/pictures/lock_3039483.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(100, 80, 151, 41));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Script MT")});
        font11.setPointSize(22);
        font11.setBold(true);
        label_12->setFont(font11);
        label_12->setStyleSheet(QString::fromUtf8(" border-radius: 10px; /* Rounded corners */\n"
"    padding: 5px 20px;\n"
"background:transparent;\n"
"border: none;\n"
"color:black;"));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(100, 110, 161, 31));
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Times New Roman")});
        font12.setPointSize(20);
        font12.setBold(true);
        font12.setItalic(false);
        font12.setUnderline(false);
        label_13->setFont(font12);
        label_13->setStyleSheet(QString::fromUtf8(" border-radius: 10px; /* Rounded corners */\n"
"    padding: 5px 20px;\n"
"background:transparent;\n"
"border: none;\n"
"color:#1E3A8A; "));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_29 = new QLabel(page_3);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(0, 0, 771, 571));
        label_29->setTabletTracking(false);
        label_29->setStyleSheet(QString::fromUtf8("background:#e3edf9;"));
        label_29->setFrameShape(QFrame::Shape::Box);
        label_30 = new QLabel(page_3);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(0, -10, 241, 581));
        label_30->setFont(font);
        label_30->setStyleSheet(QString::fromUtf8("background: #150a4a;\n"
"border: 0.5px solid black;"));
        label_30->setWordWrap(false);
        label_31 = new QLabel(page_3);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(30, 10, 161, 31));
        label_31->setFont(font1);
        label_31->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        label_32 = new QLabel(page_3);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(10, 50, 121, 111));
        label_32->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/Group 46.png")));
        label_32->setWordWrap(false);
        label_32->setOpenExternalLinks(false);
        label_33 = new QLabel(page_3);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(130, 70, 61, 31));
        label_33->setFont(font2);
        label_33->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_34 = new QLabel(page_3);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(150, 90, 21, 21));
        label_34->setFont(font2);
        label_34->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_35 = new QLabel(page_3);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(130, 110, 71, 20));
        label_35->setFont(font2);
        label_35->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_36 = new QLabel(page_3);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(10, 170, 51, 41));
        label_36->setFont(font3);
        label_36->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_37 = new QLabel(page_3);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(60, 210, 71, 21));
        label_37->setFont(font3);
        label_37->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_38 = new QLabel(page_3);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(10, 240, 81, 41));
        label_38->setFont(font3);
        label_38->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_39 = new QLabel(page_3);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(60, 280, 141, 41));
        label_39->setFont(font3);
        label_39->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_40 = new QLabel(page_3);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(60, 310, 91, 41));
        label_40->setFont(font3);
        label_40->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_41 = new QLabel(page_3);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(60, 350, 91, 21));
        label_41->setFont(font3);
        label_41->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_42 = new QLabel(page_3);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(10, 370, 61, 41));
        label_42->setFont(font3);
        label_42->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_43 = new QLabel(page_3);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(60, 400, 51, 31));
        label_43->setFont(font3);
        label_43->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_44 = new QLabel(page_3);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(60, 420, 81, 31));
        label_44->setFont(font3);
        label_44->setStyleSheet(QString::fromUtf8(" border-radius: 10%;\n"
"color:  white;\n"
""));
        label_45 = new QLabel(page_3);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(20, 450, 181, 41));
        label_45->setFont(font4);
        label_45->setStyleSheet(QString::fromUtf8("    background-color: #fe0000;  /* Dark blue background */\n"
"    color: white;  /* White text */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    border-radius: 10px;  /* Rounded corners */\n"
"    padding: 10px 55px;  /* Padding inside button */\n"
"    border: none; "));
        label_46 = new QLabel(page_3);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(0, 480, 241, 81));
        label_46->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/image 1.png")));
        label_46->setWordWrap(true);
        label_47 = new QLabel(page_3);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(260, 20, 471, 41));
        label_47->setFont(font5);
        label_47->setStyleSheet(QString::fromUtf8("  border-radius: 10px; \n"
"background: white;\n"
"  padding: 10px 160px; "));
        label_48 = new QLabel(page_3);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(260, 20, 151, 41));
        label_48->setFont(font6);
        label_48->setStyleSheet(QString::fromUtf8("  border-radius: 10px; \n"
"    background-color: #1E3A8A; \n"
"color: white;\n"
""));
        label_49 = new QLabel(page_3);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(690, 30, 21, 21));
        label_49->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/search_4398568.png")));
        label_49->setScaledContents(true);
        label_50 = new QLabel(page_3);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(250, 170, 501, 181));
        label_50->setStyleSheet(QString::fromUtf8("  border-radius: 15px; \n"
"    background-color: #1E3A8A; "));
        label_51 = new QLabel(page_3);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(240, 160, 111, 71));
        label_51->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/arrow 2.png")));
        label_51->setScaledContents(true);
        label_52 = new QLabel(page_3);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(490, 250, 111, 121));
        label_52->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/arrow 3.png")));
        label_52->setScaledContents(true);
        label_53 = new QLabel(page_3);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(270, 240, 141, 31));
        QFont font13;
        font13.setFamilies({QString::fromUtf8("Times New Roman")});
        font13.setPointSize(18);
        font13.setBold(true);
        label_53->setFont(font13);
        label_53->setStyleSheet(QString::fromUtf8("color: white;"));
        label_54 = new QLabel(page_3);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(410, 240, 141, 31));
        QFont font14;
        font14.setFamilies({QString::fromUtf8("Times New Roman")});
        font14.setPointSize(20);
        font14.setBold(true);
        label_54->setFont(font14);
        label_54->setStyleSheet(QString::fromUtf8("color: #ffc20f;\n"
""));
        label_55 = new QLabel(page_3);
        label_55->setObjectName("label_55");
        label_55->setGeometry(QRect(270, 280, 141, 16));
        label_55->setStyleSheet(QString::fromUtf8("color: white;"));
        label_56 = new QLabel(page_3);
        label_56->setObjectName("label_56");
        label_56->setGeometry(QRect(560, 170, 191, 181));
        label_56->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Qt/pictures/leave 1.png")));
        label_56->setScaledContents(true);
        stackedWidget->addWidget(page_3);
        label_29->raise();
        label_30->raise();
        label_31->raise();
        label_32->raise();
        label_33->raise();
        label_34->raise();
        label_35->raise();
        label_36->raise();
        label_37->raise();
        label_38->raise();
        label_39->raise();
        label_40->raise();
        label_41->raise();
        label_42->raise();
        label_43->raise();
        label_44->raise();
        label_45->raise();
        label_46->raise();
        label_47->raise();
        label_50->raise();
        label_51->raise();
        label_52->raise();
        label_53->raise();
        label_54->raise();
        label_55->raise();
        label_56->raise();
        label_48->raise();
        label_49->raise();
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "UTILISOFT", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "ADMIN", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Features", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Managment", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Product management", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Sales", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Debtor list", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Vendor List ", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Overview", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "View stock", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        label_24->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "     All  Records ", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "ADD ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Contact Info", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "1.", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "2.", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "3.", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "4.", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "5.", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "6.", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "7.", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "8.", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "9.", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "10.", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "11.", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "12.", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Ahmad", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "+92 321565567", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "New Lalazar", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Raza Mir", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "+92 320588990", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Westrige,Shope 1 floor", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "Ahad ", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "+92 333674598", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(2, 2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "Saddar bazar,ground floor shope1.", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(3, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "Ali", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(3, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "+92 333674598", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(3, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "New Lalazar", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(4, 0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "Fawad", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(4, 1);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "+92 321565567", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(4, 2);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "Westrige,Shope 1 floor", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(5, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "Amjad", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(5, 1);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "+92 333674598", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(5, 2);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "Adyala", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(6, 0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "Arshad", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(6, 1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "+92 333674598", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(6, 2);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "Tench", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(7, 0);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "Badar", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(7, 1);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "+92 333674598", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(7, 2);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "Attock", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(8, 0);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", " Isfaq", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(8, 1);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "+92 333674598", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(8, 2);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", " Appotabad", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(9, 0);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", " Arshad", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(9, 1);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "+92 320588990", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(9, 2);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", " Karachi", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(10, 0);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", " Hassan ", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(10, 1);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "+92 320588990", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(10, 2);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", " Lahore", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(11, 0);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("MainWindow", " Asghar", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(11, 1);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("MainWindow", "+92 320588990", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(11, 2);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("MainWindow", " Islamabad", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_27->setText(QString());
        label_15->setText(QString());
        label->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Name", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Passoward", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "UtiliSoft", nullptr));
        label_29->setText(QString());
        label_30->setText(QString());
        label_31->setText(QCoreApplication::translate("MainWindow", "UTILISOFT", nullptr));
        label_32->setText(QString());
        label_33->setText(QCoreApplication::translate("MainWindow", "Welcome ", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "To ", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Features", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Managment", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Product management", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Vendor List ", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Debtor list", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "Overview", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "Sales", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "View stock", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        label_46->setText(QString());
        label_47->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "     All  Records ", nullptr));
        label_49->setText(QString());
        label_50->setText(QString());
        label_51->setText(QString());
        label_52->setText(QString());
        label_53->setText(QCoreApplication::translate("MainWindow", "Manage Your ", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "Utiliy Store", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "With our best UTILISOFT.   ", nullptr));
        label_56->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
