#ifndef PlacesView_H
#define PlacesView_H
#include "View.h"

class PlacesView: public View {
    public:
        PlacesView(Place* place, HashTable* hTable);
        PlacesView* start();
};

#endif
