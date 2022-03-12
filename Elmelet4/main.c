#include <stdio.h>


#include <stdio.h>
#include "eloadashoz.h"

int main() {
    KONYV *konyv1;
    createKonyv(&konyv1);
    KIADAS kiadas1 = {2000, "Napsugar kiado"};
    setData(konyv1, "Az aranyember", 470, kiadas1);
    printKonyv(konyv1);
    deleteKonyv(&konyv1);
    printf("%llu", sizeof(int));
    return 0;
}


