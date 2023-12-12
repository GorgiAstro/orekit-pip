#ifndef org_orekit_utils_Constants_H
#define org_orekit_utils_Constants_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class Constants : public ::java::lang::Object {
       public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Constants(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Constants(const Constants& obj) : ::java::lang::Object(obj) {}

        static jdouble ARC_SECONDS_TO_RADIANS;
        static jdouble BESSELIAN_YEAR;
        static jdouble EGM96_EARTH_C20;
        static jdouble EGM96_EARTH_C30;
        static jdouble EGM96_EARTH_C40;
        static jdouble EGM96_EARTH_C50;
        static jdouble EGM96_EARTH_C60;
        static jdouble EGM96_EARTH_EQUATORIAL_RADIUS;
        static jdouble EGM96_EARTH_MU;
        static jdouble EIGEN5C_EARTH_C20;
        static jdouble EIGEN5C_EARTH_C30;
        static jdouble EIGEN5C_EARTH_C40;
        static jdouble EIGEN5C_EARTH_C50;
        static jdouble EIGEN5C_EARTH_C60;
        static jdouble EIGEN5C_EARTH_EQUATORIAL_RADIUS;
        static jdouble EIGEN5C_EARTH_MU;
        static jdouble G0_STANDARD_GRAVITY;
        static jdouble GRIM5C1_EARTH_ANGULAR_VELOCITY;
        static jdouble GRIM5C1_EARTH_C20;
        static jdouble GRIM5C1_EARTH_C30;
        static jdouble GRIM5C1_EARTH_C40;
        static jdouble GRIM5C1_EARTH_C50;
        static jdouble GRIM5C1_EARTH_C60;
        static jdouble GRIM5C1_EARTH_EQUATORIAL_RADIUS;
        static jdouble GRIM5C1_EARTH_FLATTENING;
        static jdouble GRIM5C1_EARTH_MU;
        static jdouble GRS80_EARTH_ANGULAR_VELOCITY;
        static jdouble GRS80_EARTH_C20;
        static jdouble GRS80_EARTH_EQUATORIAL_RADIUS;
        static jdouble GRS80_EARTH_FLATTENING;
        static jdouble GRS80_EARTH_MU;
        static jdouble IAU_2012_ASTRONOMICAL_UNIT;
        static jdouble IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS;
        static jdouble IAU_2015_NOMINAL_EARTH_GM;
        static jdouble IAU_2015_NOMINAL_EARTH_POLAR_RADIUS;
        static jdouble IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS;
        static jdouble IAU_2015_NOMINAL_JUPITER_GM;
        static jdouble IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS;
        static jdouble IAU_2015_NOMINAL_SOLAR_RADIUS;
        static jdouble IAU_2015_NOMINAL_SUN_GM;
        static jdouble IERS2003_EARTH_ANGULAR_VELOCITY;
        static jdouble IERS2003_EARTH_C20;
        static jdouble IERS2003_EARTH_EQUATORIAL_RADIUS;
        static jdouble IERS2003_EARTH_FLATTENING;
        static jdouble IERS2003_EARTH_MU;
        static jdouble IERS2010_EARTH_ANGULAR_VELOCITY;
        static jdouble IERS2010_EARTH_C20;
        static jdouble IERS2010_EARTH_EQUATORIAL_RADIUS;
        static jdouble IERS2010_EARTH_FLATTENING;
        static jdouble IERS2010_EARTH_MU;
        static jdouble IERS96_EARTH_ANGULAR_VELOCITY;
        static jdouble IERS96_EARTH_C20;
        static jdouble IERS96_EARTH_EQUATORIAL_RADIUS;
        static jdouble IERS96_EARTH_FLATTENING;
        static jdouble IERS96_EARTH_MU;
        static jdouble JPL_SSD_ASTRONOMICAL_UNIT;
        static jdouble JPL_SSD_EARTH_GM;
        static jdouble JPL_SSD_EARTH_MOON_MASS_RATIO;
        static jdouble JPL_SSD_EARTH_PLUS_MOON_GM;
        static jdouble JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT;
        static jdouble JPL_SSD_JUPITER_SYSTEM_GM;
        static jdouble JPL_SSD_MARS_SYSTEM_GM;
        static jdouble JPL_SSD_MERCURY_GM;
        static jdouble JPL_SSD_MOON_GM;
        static jdouble JPL_SSD_NEPTUNE_SYSTEM_GM;
        static jdouble JPL_SSD_PLUTO_SYSTEM_GM;
        static jdouble JPL_SSD_SATURN_SYSTEM_GM;
        static jdouble JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO;
        static jdouble JPL_SSD_SUN_GM;
        static jdouble JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO;
        static jdouble JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO;
        static jdouble JPL_SSD_SUN_MERCURY_MASS_RATIO;
        static jdouble JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO;
        static jdouble JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO;
        static jdouble JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO;
        static jdouble JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO;
        static jdouble JPL_SSD_SUN_VENUS_MASS_RATIO;
        static jdouble JPL_SSD_URANUS_SYSTEM_GM;
        static jdouble JPL_SSD_VENUS_GM;
        static jdouble JULIAN_CENTURY;
        static jdouble JULIAN_DAY;
        static jdouble JULIAN_YEAR;
        static jdouble MOON_EQUATORIAL_RADIUS;
        static jdouble SPEED_OF_LIGHT;
        static jdouble SUN_RADIUS;
        static jdouble WGS84_EARTH_ANGULAR_VELOCITY;
        static jdouble WGS84_EARTH_C20;
        static jdouble WGS84_EARTH_EQUATORIAL_RADIUS;
        static jdouble WGS84_EARTH_FLATTENING;
        static jdouble WGS84_EARTH_MU;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(Constants);
      extern PyTypeObject *PY_TYPE(Constants);

      class t_Constants {
      public:
        PyObject_HEAD
        Constants object;
        static PyObject *wrap_Object(const Constants&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
