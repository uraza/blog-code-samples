#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>
#include "Line.h"

BOOST_AUTO_TEST_CASE(LineLength) {
  Line l(Point(0.,0.), Point(3.,4.));
  BOOST_CHECK_EQUAL(l.length(), 5.);    // La ligne doit être de longueur 5
}
