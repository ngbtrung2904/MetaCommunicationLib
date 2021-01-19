#ifndef IROBOTUSERCONTROL_H
#define IROBOTUSERCONTROL_H

#include <QWidget>
#include <metacommlib/MetaCommLib_global.h>
#include <metacommlib/IRobot.h>
#include <memory>
using namespace std;

namespace mtcl {

class METACOMMLIB_EXPORT IRobotUserControl : public QWidget
{
    Q_OBJECT
public:
    IRobotUserControl(QWidget* parent = nullptr);
    virtual ~IRobotUserControl();
    virtual bool SetRobot(shared_ptr<mtcl::IRobot> robot) = 0;
};

}

#endif // IROBOTUSERCONTROL_H
