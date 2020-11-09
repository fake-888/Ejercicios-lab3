#pragma once
#include "Cuenta.h"

class CuentaCheques : public Cuenta 
{
public:
    CuentaCheques( double, double );

    void credito( double );
    void debito( double );

private:
    double tarifaPorTransaccion;
};