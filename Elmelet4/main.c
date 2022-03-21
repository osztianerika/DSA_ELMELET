
#include "eloadashoz.h"
#include "book_array.h"


int main() {
    /*KONYV *konyv1;
    createKonyv(&konyv1);
    KIADAS kiadas1={2000,"Napsugar kiado"};
    setKonyvData(konyv1,"Az aranyember",470,kiadas1);
    printKonyv(konyv1);
    deleteKonyv(&konyv1);*/

    BookArray* bookarray;
    createBookArray(&bookarray,10);

    addBook(bookarray,3);
    //printf("%i",bookarray->size);
    printBookArray(bookarray);



}
