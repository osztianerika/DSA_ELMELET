//
// Created by erika on 3/12/2022.
//

#ifndef ELMELET4_ELOADASHOZ_H
#define ELMELET4_ELOADASHOZ_H
//
// Created by SP on 2022. 03. 11..
//


#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int ev;
    char hely[20];
} KIADAS;
typedef struct {
    char cim[20];
    int oldalszam;
    KIADAS kiadas;
} KONYV;

void createKonyv(KONYV **konyv);

void setData(KONYV *konyv, char *cim, int oldal, KIADAS kiadas);

void printKonyv(KONYV *konyv);

void deleteKonyv(KONYV **konyv);


#endif //ELMELET4_ELOADASHOZ_H
