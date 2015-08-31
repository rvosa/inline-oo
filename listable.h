#ifndef LISTABLE_H
#define LISTABLE_H

void insert_at_index(SV* obj, SV* element, int index);
void insert(SV* obj, SV* element);
AV* get_entities(SV* obj);
void splice_at_index(SV* obj, SV* element, int index);

typedef struct {
	Identifiable identifiable;
    SV **entities;
    int index;
    size_t used;
    size_t size;
} Listable;

#endif