//
// Created by markp on 3/11/2022.
//

#ifndef INC_4__HET_ELOADAS_H
#define INC_4__HET_ELOADAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int evszam;
    char kiadasi_hely[20];
}KIADAS;

typedef struct {
    char cim[20];
    int oldalszam;
    KIADAS kiadas;
}KONYV;

void createKonyv(KONYV** konyv);
void setKonyvData(KONYV* konyv,char* cim,int oldalszam,KIADAS kiadas);
void printKonyv(KONYV* konyv);
void deleteKonyv(KONYV**);

#endif //INC_4__HET_ELOADAS_H
