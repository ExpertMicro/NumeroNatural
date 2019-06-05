#include "NNatural.h"
#include<cmath>

NNatural::NNatural():numero(0)
{
}

NNatural::NNatural(int numero):numero(0)
{
    if(numero < 0) throw QString("Numero nao pode ser < 0");
    this->numero = numero;
}

void NNatural::set(int numero){
    if(numero < 0) throw QString("Numero nao pode ser < 0");
    this->numero = numero;
}


long long int NNatural::fatorial() const
{
    long long int fat = 1;
    for(int i = 2; i <= numero; i++)
    {
        fat*=i;
    }
    return fat;
}


bool NNatural::perfeito()const
{
    int i;
    int soma = 0;
    for(i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            soma = soma + i;
        }
    }
    return (numero == soma);
}


bool NNatural::capicua()const
{
    int reverso = 0;
    int aux = numero;

    while(aux != 0)
    {
        reverso = reverso * 10 + aux % 10;
        aux = aux / 10;
    }
    return (reverso == numero);
}


bool NNatural::eQuadradoPerfeito()const{
    int raiz = static_cast<int>(sqrt(numero));
    return ((raiz*raiz)==numero);
}


bool NNatural::primo()const
{
    int i, div = 0;
    int raiz = 0;

    if (numero == 0 || numero == 1)
    {
        return false;
    }
    else
    {
        raiz = sqrt(numero);
        div = 1;
        for(i = 2; i <= raiz; i++)//36 % 5 = 1  36 % 6 = 0
        {
            if(numero % i == 0)
            {
                div = 0;
            }
        }
     }

    return (div == 1);
}


QString NNatural::mudarBase(int n) const
{
    QString base2 = QString::number(numero,n).toUpper();
    return base2;
}


NNatural NNatural::mdc(NNatural pmdc1) const
{
    int n1 = numero;
    int n2 = pmdc1.getNumero();
    int resto = n1 % n2;
    while (resto != 0)
    {
        n1 = n2;
        n2 = resto;
        resto = n1 % n2;
    }
    NNatural aux;
    aux.set(n2);
    return aux;
}

NNatural NNatural::mmc(NNatural pmmc1)const
{
    int resto, n1, n2, a, b;
    n1 = numero;
    n2 = pmmc1.getNumero();
    a = n1;
    b = n2;

    if (b == 0) return 0;

    do
    {
        resto = a % b;
        a = b;
        b = resto;
    } while (resto != 0);

    resto = n1 * n2 / a;
    NNatural aux;
    aux.set(resto);
    return aux;
}

bool NNatural::primoEntreSi(NNatural p1) const
{
    NNatural r =p1.mdc(NNatural(numero));
    return r.getNumero() == 1;
}



