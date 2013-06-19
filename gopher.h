#ifndef GOPHER_H
#define GOPHER_H

#include <QMainWindow>
#include <QComboBox>
#include <QLineEdit>
#include <QTextEdit>
#include <QJsonObject>
#include <QJsonArray>
#include <QList>
#include <QIcon>

namespace Ui
{
class Gopher;
}

class Gopher : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Gopher(QWidget *parent = 0);
    ~Gopher();
    
private slots:
    void on_Cancel_clicked();

    void on_Done_clicked();

    void on_imageMode_currentIndexChanged(int index);

    void on_Instrument_currentIndexChanged(int index);

    void on_actionHedwig_triggered();

    void on_actionImport_triggered();

    void on_actionExport_triggered();

    void on_actionExit_triggered();

    void on_actionAbout_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionMyRTB_triggered();

    void on_pushButton_clicked();

private:
    Ui::Gopher* ui;

    QJsonObject* sessionObject;
    QJsonObject list;

    QJsonDocument* file;
};

#endif // GOPHER_H
