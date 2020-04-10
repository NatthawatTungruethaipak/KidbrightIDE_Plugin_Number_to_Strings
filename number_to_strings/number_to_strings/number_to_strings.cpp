/**
 * number_to_strings.cpp
 *
 * Created by Natthawat Tungruethaipak, 10 April 2020
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "esp_system.h"
#include "kidbright32.h"
#include "driver/uart.h"
#include "soc/uart_struct.h"
#include "number_to_strings.h"

number_to_strings::number_to_strings()
{
}

void number_to_strings::init(void)
{
  initialized = true;
  error = false;
}

int number_to_strings::prop_count(void)
{
  // not supported
  return 0;
}

bool number_to_strings::prop_name(int index, char *name)
{
  // not supported
  return false;
}

bool number_to_strings::prop_unit(int index, char *unit)
{
  // not supported
  return false;
}

bool number_to_strings::prop_attr(int index, char *attr)
{
  // not supported
  return false;
}

bool number_to_strings::prop_read(int index, char *value)
{
  // not supported
  return false;
}

bool number_to_strings::prop_write(int index, char *value)
{
  // not supported
  return false;
}

void number_to_strings::process(Driver *drv)
{
}

char *number_to_strings::numbertostring(double input)
{
  sprintf(dummystr, "%lf", input);
  return dummystr;
}

char *number_to_strings::numbertostring()
{
  return "Please insert the block which is number block after number_to_strings.";
}
