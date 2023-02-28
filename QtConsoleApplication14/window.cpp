#include "window.h"
#include <ui_window.h>


    window::window(QWidget* parent) : QWidget(parent), ui(new Ui::window)
    {
        
        ui->setupUi(this);
        connect(ui->regularLine, &QLineEdit::textEdited, [this](QString currentText)
            {
                ui->labelRegularStatus->setText("Please enter + and 11 digits.");
                if (currentText.length() < 12)
                    setIncompleteLabelRegular();
                else
                {
                    if (currentText.length() > 12)
                        TooMunySymbols();
                    else {
                        QRegularExpression exp("^\\+\\d{11}");
                        if (exp.match(currentText).hasMatch())
                            setOkLabelRegular();
                        else
                            setNoOkLabelRegular();
                    }
                }
            });
    }




    window::~window()
    {
        delete ui;
    }

    void window::setOkLabelRegular()
    {
        ui->labelRegularStatus->setText("Ok");
        ui->labelRegularStatus->setStyleSheet("QLabel {color: green;}");
    }

    void window::setNoOkLabelRegular()
    {
        ui->labelRegularStatus->setText("NoOk");
        ui->labelRegularStatus->setStyleSheet("QLabel {color: red;}");
    }

    void window::setIncompleteLabelRegular()
    {
        ui->labelRegularStatus->setText("Not enouth symbols");
        ui->labelRegularStatus->setStyleSheet("QLabel {color: lightblue;}");
    }
    void window::TooMunySymbols() {
        ui->labelRegularStatus->setText("Too muny symbols");
        ui->labelRegularStatus->setStyleSheet("QLabel {color: red;}");
    }
