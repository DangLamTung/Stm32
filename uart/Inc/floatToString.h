/*
 * floatToString.h
 *
 *  Created on: Jun 13, 2019
 *      Author: PC
 */

#ifndef FLOATTOSTRING_H_
#define FLOATTOSTRING_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *dtostrf (double val, signed char width, unsigned char prec, char *sout) {
  //Commented code is the original version
  /*char fmt[20];
  sprintf(fmt, "%%%d.%df", width, prec);
  sprintf(sout, fmt, val);
  return sout;*/

  // Handle negative numbers
  unsigned int negative = 0;
  if (val < 0.0)
  {
     negative = 1;
     val = -val;
  }

  // Round correctly so that print(1.999, 2) prints as "2.00"
  double rounding = 0.5;
  for (int i=0; i<prec; ++i)
    rounding /= 10.0;

  val += rounding;

  // Extract the integer part of the number
  unsigned long int_part = (unsigned long)val;
  double remainder = val - (double)int_part;

  if(negative)
    int_part = -int_part;

  // Extract digits from the remainder
  unsigned long dec_part = 0;
  double decade = 1.0;
  for(int i=0; i < prec; i++)
    decade *= 10.0;
  remainder *= decade;
  dec_part = (int)remainder;

  sprintf(sout, "%ld.%ld", int_part, dec_part);

  // Handle minimum field width of the output string
  // width is signed value, negative for left adjustment.
  // Range -128,127
  char fmt[129] = "";
  unsigned int w = width;
  if (width < 0) {
    negative = 1;
    w = -width;
  } else {
    negative = 0;
  }

  if(strlen(sout) < w) {
    memset(fmt, ' ', 128);
    fmt[w-strlen(sout)] = '\0';
	if(negative == 0) {
      char *tmp = strdup(sout);
      strcpy(sout,fmt);
      strcat(sout, tmp);
      free(tmp);
    } else {
      // left adjustment
       strcat(sout, fmt);
    }
  }

  return sout;
}

#define MAX_PRECISION	(10)
static const double rounders[MAX_PRECISION + 1] =
{
	0.5,				// 0
	0.05,				// 1
	0.005,				// 2
	0.0005,				// 3
	0.00005,			// 4
	0.000005,			// 5
	0.0000005,			// 6
	0.00000005,			// 7
	0.000000005,		// 8
	0.0000000005,		// 9
	0.00000000005		// 10
};

char * ftoa(double f, char * buf, int precision)
{
	char * ptr = buf;
	char * p = ptr;
	char * p1;
	char c;
	long intPart;

	// check precision bounds
	if (precision > MAX_PRECISION)
		precision = MAX_PRECISION;

	// sign stuff
	if (f < 0)
	{
		f = -f;
		*ptr++ = '-';
	}

	if (precision < 0)  // negative precision == automatic precision guess
	{
		if (f < 1.0) precision = 6;
		else if (f < 10.0) precision = 5;
		else if (f < 100.0) precision = 4;
		else if (f < 1000.0) precision = 3;
		else if (f < 10000.0) precision = 2;
		else if (f < 100000.0) precision = 1;
		else precision = 0;
	}

	// round value according the precision
	if (precision)
		f += rounders[precision];

	// integer part...
	intPart = f;
	f -= intPart;

	if (!intPart)
		*ptr++ = '0';
	else
	{
		// save start pointer
		p = ptr;

		// convert (reverse order)
		while (intPart)
		{
			*p++ = '0' + intPart % 10;
			intPart /= 10;
		}

		// save end pos
		p1 = p;

		// reverse result
		while (p > ptr)
		{
			c = *--p;
			*p = *ptr;
			*ptr++ = c;
		}

		// restore end pos
		ptr = p1;
	}

	// decimal part
	if (precision)
	{
		// place decimal point
		*ptr++ = '.';

		// convert
		while (precision--)
		{
			f *= 10.0;
			c = f;
			*ptr++ = '0' + c;
			f -= c;
		}
	}

	// terminating zero
	*ptr = 0;

	return buf;
}
#endif /* FLOATTOSTRING_H_ */
