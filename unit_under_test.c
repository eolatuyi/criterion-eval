//        File: unit_under_test.c
//      Author: Ebenezer O.
//        Date: Feb 14, 2021
// Description: A code that can be exercised/unit tested by Criterion to
//              better understand how Criterion works.
			 
#include <inttypes.h>
#include "unit_under_test.h"

float float_adder(float lhs, float rhs)
{
	float sum;
	sum = lhs + rhs;
    return sum;
}

// int main(void)
// {
//     float result;
	
//     result = float_adder(2,4);
	
//     return 0;
// }
