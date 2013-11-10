#ifndef View_H
#define View_H
#include <string>
#include "Place.h"
#include "HashTable.h"
using namespace std;

class View {
    protected:
        Place* rootPlace;
        HashTable* hashTable;
        string getAddress(int rejectEmpty = 0);
        Place* getPlace();
    public:
        View(Place* place, HashTable* hTable);
        virtual View* start();
};

#endif
