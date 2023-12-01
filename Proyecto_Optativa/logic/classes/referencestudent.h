#ifndef REFERENCESTUDENT_H
#define REFERENCESTUDENT_H

class ReferenceStudent {

private:

    unsigned long mainIndex;
    unsigned long nextIndex;

public:

    ReferenceStudent(unsigned long mainIndex, unsigned long nextIndex);

    void setMainIndex(unsigned long mainIndex);
    unsigned long getMainIndex();

    void setNextIndex(unsigned long nextIndex);
    unsigned long getNextIndex();
};

#endif // REFERENCESTUDENT_H
