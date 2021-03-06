#ifndef TECHMANPOSITION_H
#define TECHMANPOSITION_H

#include <metacommlib/IRobotPosition.h>
#include <metacommlib/CommLibDefines.h>

namespace mtcl {

class METACOMMLIB_EXPORT TechmanPosition : public IRobotPosition
{
public:
    TechmanPosition();
    virtual ~TechmanPosition();

    double GetPosX();
    double GetPosY();
    double GetPosThetaInDegs();
    double GetPosZ();
    void SetPosX(double x);
    void SetPosY(double y);
    void SetPosThetaInDegs(double thetaInDegs);
    void SetPosZ(double z);

    void SetPosition(double x, double y, double z, double thetaInDegs);
    virtual void GetPosition(double &x, double &y, double &z, double &thetaInDegs);
};

}
#endif // TECHMANPOSITION_H
