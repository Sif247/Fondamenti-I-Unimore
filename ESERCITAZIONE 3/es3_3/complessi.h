#if !defined COMPLESSI_H
#define COMPLESSI_H

struct complesso {
    double re, im;
};

extern void prodotto_complesso(struct complesso* comp1, const struct complesso* comp2);

#endif /*COMPLESSI_H*/