/**
 * number_to_strings.h
 *
 * Created by Natthawat Tungruethaipak, 10 April 2020
 * Contact via e-mail:natthawat.tungruethaipak@mail.kmutt.ac.th
 */
#ifndef __tostring_H__
#define __tostring_H__

#include "driver.h"
#include "device.h"

#define number_to_strings_POLLING_MS 1000

class number_to_strings : public Device
{
private:
  char dummystr[50];

public:
  // constructor
  number_to_strings();
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
  char *numbertostring(double input);
  char *numbertostring();
};
#endif
