int randoms(int min, int max);

typedef struct {
        int numero;
        int abandon;
        unsigned int tpsSecteur[3];
        unsigned int tpsTour;
} voiture;

void swap(voiture * pv1, voiture * pv2);

int comp(const void *p1,const void *p2);
