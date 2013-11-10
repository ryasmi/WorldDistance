#ifndef DeletePlacesView_CPP
#define DeletePlacesView_CPP
#include <iostream>
#include "DeletePlacesView.h"
#include "Place.h"
#include "HashTable.h"
using namespace std;

DeletePlacesView::DeletePlacesView(Place* place, HashTable* hTable) : View(place, hTable) {}
DeletePlacesView* DeletePlacesView::start() {
    return this;
}

#endif
