#ifndef ModifyPlaceView_H
#define ModifyPlaceView_H
#include <iostream>
#include "View.h"
using namespace std;

class ModifyPlacesView: public View {
	private:
		float inputFloat(string message);
    public:
        ModifyPlacesView(Place* place, HashTable* hTable);
        ModifyPlacesView* start();
};

#endif
