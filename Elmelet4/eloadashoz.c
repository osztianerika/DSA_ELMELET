//
// Created by erika on 3/12/2022.
//

#include "eloadashoz.h"
//
// Created by SP on 2022. 03. 11..
//


void createKonyv(KONYV **konyv) {
    *konyv = malloc(sizeof(KONYV));
    if (*konyv == NULL) {
        exit(-1);
    }
}

void setData(KONYV *konyv, char *cim, int oldal, KIADAS kiadas) {
    strcpy(konyv->cim, cim);
    konyv->oldalszam = oldal;
    konyv->kiadas = kiadas;
}

void printKonyv(KONYV *konyv) {
    printf("Cim: %s\nOldalszam: %i\nKiadasi ev: %i\nKiadasi hely: %s\n",
           konyv->cim, konyv->oldalszam, konyv->kiadas.ev, konyv->kiadas.hely);
}

void deleteKonyv(KONYV **konyv) {
    free(*konyv);
    *konyv = NULL;
}
