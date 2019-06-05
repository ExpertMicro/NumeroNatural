#ifndef NNATURAL_H
#define NNATURAL_H

#include<QString>
#include<cmath>

class NNatural
{
private:
    int numero;
public:
    NNatural();
    NNatural(int numero);
    int getNumero()const{return numero;}
    void set(int numero);
    bool eQuadradoPerfeito()const;

    long long int fatorial() const;

    bool perfeito() const;

    bool capicua() const;

    bool quadradoPerfeito() const;

    bool primo() const;

    QString mudarBase(int n) const;

    NNatural mdc(NNatural pmdc1)const;

    NNatural mmc(NNatural pmmc1)const;

    bool primoEntreSi(NNatural p1) const;

    //mmc mdc(n1,n2)*mmc(n1,n2) = n1*n2

};


#endif // NNATURAL_H
