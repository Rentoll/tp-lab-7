#ifndef CELL_H
#define CELL_H

#include "object.h"

class Ocean;
class Cell {
	friend Ocean;
private:
	Pair coord;
	Object* obj;
	Ocean* ocean;
public:
	explicit Cell(Pair p = { 0, 0 }, Ocean* oc = nullptr) :
		coord(p),
		obj(nullptr),
		ocean(oc) {}
	void init(Pair, Ocean*);
	void clearCell();
	Object* getObject();
	Ocean* getOcean();
	Pair getCoord();
	void setObject(Object*);

};
#endif 