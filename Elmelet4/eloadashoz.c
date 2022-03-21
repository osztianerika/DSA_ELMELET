//
// Created by markp on 3/11/2022.
//
#include "stdio.h"
#include "eloadashoz.h"


void createKonyv(KONYV** konyv){
    *konyv=malloc(sizeof(KONYV));
    if(*konyv== NULL){
        exit(-1);
    }
}

void setKonyvData(KONYV* konyv,char* cim,int oldalszam,KIADAS kiadas){
    strcpy(konyv->cim,cim);
    konyv->oldalszam=oldalszam;
    konyv->kiadas=kiadas;
}


void printKonyv(KONYV* konyv){\
    if(konyv!=NULL){
        printf("Cim: %s\nOldalszam: %d\nKiadasi ev: %d\nKiadasi hely: %s\n",konyv->cim,konyv->oldalszam,konyv->kiadas.evszam,konyv->kiadas.kiadasi_hely);
    }else{
        printf("NULL\n");
    }

}

void deleteKonyv(KONYV** konyv){
    free(*konyv);
    *konyv=NULL;
}

