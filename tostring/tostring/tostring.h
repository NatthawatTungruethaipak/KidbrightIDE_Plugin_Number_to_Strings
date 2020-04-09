#ifndef __tostring_H__
#define __tostring_H__

#include "driver.h"
#include "device.h"

#define tostring_POLLING_MS         1000

class tostring : public Device {
    private:
        char tostr[50];
        char dummystr[50];
    public:
        // constructor
        tostring();
        // override
        void init(void);
        void process(Driver *drv);
        int prop_count(void);
        bool prop_name(int index, char *name);
        bool prop_unit(int index, char *unit);
        bool prop_attr(int index, char *attr);
        bool prop_read(int index, char *value);
        bool prop_write(int index, char *value);
        // method
        // char* random();
        char* numbertostring(double input);
        // char* doubletostring(float thisdouble);
};
#endif
