/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *regularLine;
    QLabel *labelRegularStatus;

    void setupUi(QWidget *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QString::fromUtf8("window"));
        window->setWindowModality(Qt::NonModal);
        window->resize(800, 135);
        gridLayout = new QGridLayout(window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        regularLine = new QLineEdit(window);
        regularLine->setObjectName(QString::fromUtf8("regularLine"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(regularLine->sizePolicy().hasHeightForWidth());
        regularLine->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        regularLine->setFont(font);

        horizontalLayout->addWidget(regularLine);

        labelRegularStatus = new QLabel(window);
        labelRegularStatus->setObjectName(QString::fromUtf8("labelRegularStatus"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelRegularStatus->sizePolicy().hasHeightForWidth());
        labelRegularStatus->setSizePolicy(sizePolicy1);
        labelRegularStatus->setFont(font);

        horizontalLayout->addWidget(labelRegularStatus);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(window);

        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QWidget *window)
    {
        window->setWindowTitle(QCoreApplication::translate("window", "MainWindow", nullptr));
        labelRegularStatus->setText(QCoreApplication::translate("window", "Please enter + and 11 digits.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
