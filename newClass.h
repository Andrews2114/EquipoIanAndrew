//
// Created by 4ndre on 23/10/2023.
//

#ifndef POO2023_NEWCLASS_H
#define POO2023_NEWCLASS_H


class newClass {
public:

    newClass(double &age,double &weight, double &height);
    double hfcm2m();
    double wflb2kg();
    double IMC() const;

private:
    double &age1;
    double &weight1;
    double &height1;
};


#endif //POO2023_NEWCLASS_H
