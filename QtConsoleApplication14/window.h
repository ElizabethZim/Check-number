
#include <QWidget>
#include <QRegularExpression>
#include <QLineEdit>
#include <QLabel>


QT_BEGIN_NAMESPACE
namespace Ui { class window; }
QT_END_NAMESPACE


class window : public QWidget
{

public:
    window(QWidget* parent = nullptr);
    ~window();

public slots:
    void setOkLabelRegular();
    void setNoOkLabelRegular();
    void setIncompleteLabelRegular();
    void TooMunySymbols();

private:
    Ui::window* ui;

} ;

