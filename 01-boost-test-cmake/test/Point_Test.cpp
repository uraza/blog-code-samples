#define BOOST_TEST_DYN_LINK           // A ajouter dans le cas d'une liaison dynamique à Boost Test
#define BOOST_TEST_MODULE MyTest      // Nom du module de test

#include <boost/test/unit_test.hpp>
#include "Point.h"

BOOST_AUTO_TEST_CASE(PointCoordinates) {  // Ce test s'appelle PointCoordinates
  Point p(1., 2.);
  BOOST_CHECK_EQUAL(p.getX(), 1.);        // Un test d'égalité, on vérifie que les coordonnées sont correctes
  BOOST_CHECK_EQUAL(p.getY(), 2.);        // Ce test devrait échouer, la coordonnée Y vaut 2...
}
