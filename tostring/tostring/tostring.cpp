#include <stdio.h>
#include <string.h>
#include <math.h>
#include "esp_system.h"
#include "kidbright32.h"
#include "driver/uart.h"
#include "soc/uart_struct.h"
#include "tostring.h"

tostring::tostring() {
}

void tostring::init(void) {
  initialized = true;
  error = false;
}

int tostring::prop_count(void) {
  // not supported
  return 0;
}

bool tostring::prop_name(int index, char *name) {
  // not supported
  return false;
}

bool tostring::prop_unit(int index, char *unit) {
  // not supported
  return false;
}

bool tostring::prop_attr(int index, char *attr) {
  // not supported
  return false;
}

bool tostring::prop_read(int index, char *value) {
  // not supported
  return false;
}

bool tostring::prop_write(int index, char *value) {
  // not supported
  return false;
}

void tostring::process(Driver *drv) {

}

char* tostring::numbertostring(double input) {
  sprintf(dummystr, "%lf", input);
  return dummystr;
}
