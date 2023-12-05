#include "complessi.h"

void prodotto_complesso(struct complesso* comp1, const struct complesso* comp2)
{
	struct complesso risultato;

	risultato.re = (comp1->re * comp2->re) - (comp1->im * comp2->im);
	risultato.im = (comp1->re * comp2->im) - (comp2->re * comp1->im);

	comp1->re = risultato.re;
	comp1->im = risultato.im;

}