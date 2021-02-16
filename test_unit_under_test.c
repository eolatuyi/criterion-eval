//        File: test_unit_under_test.c
//      Author: Ebenezer O.
//        Date: Feb 15, 2021
// Description: Tester that exercises a unit under test using Criterion to
//              better understand how Criterion works.
#include <Third_Party/Criterion/include/criterion/criterion.h>
#include <inttypes.h>
#include "unit_under_test.h"

// TODO: optional Test criterion_test_extra_data initializer usage 

Test(suite_name, test_name) {
    // test contents

    // Assertion examples - cr_expect - non-fatal assertion continues but notify failure
    cr_expect(strlen("Test") == 4, "Expected \"Test\" to have a length of 4.");
    cr_expect(float_adder(4.2, 3.8) == 8.0, "Expected float_adder(4.2, 3.8) == 8.0");

    // Assertion examples - cr_assert - fatal assertion terminates execution.
    cr_assert(float_adder(4, 3) == 7.0);
    cr_assert(float_adder(4, 4) == 8.0);     // test would reach here if above failed
}