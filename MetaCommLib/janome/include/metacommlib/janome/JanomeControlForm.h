#ifndef JANOMECONTROLFORM_H
#define JANOMECONTROLFORM_H

#include <QWidget>
#include <metacommlib/janome/Janome.h>
#include <metacommlib/IRobotUserControl.h>
#include <metacommlib/MetaCommLib_global.h>
#include <iostream>
using namespace std;

namespace Ui {
class JanomeControlForm;
}

class JanomeControlForm : public mtcl::IRobotUserControl
{
    Q_OBJECT

public:
    explicit JanomeControlForm(QWidget *parent = nullptr);
    ~JanomeControlForm();
    virtual bool SetRobot(shared_ptr<mtcl::IRobot> robot) override;
protected:
    virtual void InitControl() override;
    virtual void RefreshBtn() override;
private slots:
    void HandleConnectJanome();
    void HandlePTPsendBtnClicked();
    void HandleJOGCtrlBtnPressed(int);
    void HandleJOGCtrlBtnReleased();
    void HandlePositionChanged();
    void HandleConnectionStatusChanged(int connectionStatus);
    void HandleReceivedMsg(const QByteArray& data);
    void HandleRobotInformUpdated();
    void HandleMechanicalInitializeClicked();
    void HandleReturnHomeClicked();
    void HandleRobotReturnToHomeStatusChanged(int v);
    void HandleRobotMecaInitStatusChanged(int v);
    void HandleBtnSpeedLowClicked();
    void HandleBtnSpeedMeidumClicked();
    void HandleBtnSpeedHighClicked();
private:
    void SetExpectedSpeed(int speedLevel);
    Ui::JanomeControlForm *ui;
    bool mConnectStatus;
    shared_ptr<mtcl::Janome> mptrJanome;
    int mNumberAxes;
};

#endif // JANOMECONTROLFORM_H
