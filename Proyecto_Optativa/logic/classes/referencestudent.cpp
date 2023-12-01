#include "referencestudent.h"


ReferenceStudent::ReferenceStudent(unsigned long mainIndex, unsigned long nextIndex) {

    this->mainIndex = mainIndex;
    this->nextIndex = nextIndex;
}

void ReferenceStudent::setMainIndex(unsigned long mainIndex) {
    this->mainIndex = mainIndex;
}

unsigned long ReferenceStudent::getMainIndex() {
    return this->mainIndex;
}

void ReferenceStudent::setNextIndex(unsigned long nextIndex) {
    this->nextIndex = nextIndex;
}

unsigned long ReferenceStudent::getNextIndex() {
    return this->nextIndex;
}


