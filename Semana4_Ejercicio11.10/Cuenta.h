#pragma once

class Cuenta {
public:
    explicit Cuenta( double );

    void credito( double );
    bool debito( double );
    double obtenerBalance() const 
    { 
        return balance; 
    }

private:
    double balance;
};