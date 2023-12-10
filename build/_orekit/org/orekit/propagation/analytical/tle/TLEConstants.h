#ifndef org_orekit_propagation_analytical_tle_TLEConstants_H
#define org_orekit_propagation_analytical_tle_TLEConstants_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class TLEConstants : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TLEConstants(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TLEConstants(const TLEConstants& obj) : ::java::lang::Object(obj) {}

            static jdouble A3OVK2;
            static jdouble C1L;
            static jdouble C1SS;
            static jdouble CK2;
            static jdouble CK4;
            static jdouble C_2FASX4;
            static jdouble C_3FASX6;
            static jdouble C_FASX2;
            static jdouble C_G22;
            static jdouble C_G32;
            static jdouble C_G44;
            static jdouble C_G52;
            static jdouble C_G54;
            static jdouble EARTH_RADIUS;
            static jdouble MINUTES_PER_DAY;
            static jdouble MU;
            static jdouble NORMALIZED_EQUATORIAL_RADIUS;
            static jdouble ONE_THIRD;
            static jdouble Q22;
            static jdouble Q31;
            static jdouble Q33;
            static jdouble QOMS2T;
            static jdouble ROOT22;
            static jdouble ROOT32;
            static jdouble ROOT44;
            static jdouble ROOT52;
            static jdouble ROOT54;
            static jdouble S;
            static jdouble S_2FASX4;
            static jdouble S_3FASX6;
            static jdouble S_FASX2;
            static jdouble S_G22;
            static jdouble S_G32;
            static jdouble S_G44;
            static jdouble S_G52;
            static jdouble S_G54;
            static jdouble THDT;
            static jdouble TWO_THIRD;
            static jdouble XJ2;
            static jdouble XJ3;
            static jdouble XJ4;
            static jdouble XKE;
            static jdouble ZEL;
            static jdouble ZES;
            static jdouble ZNL;
            static jdouble ZNS;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          extern PyType_Def PY_TYPE_DEF(TLEConstants);
          extern PyTypeObject *PY_TYPE(TLEConstants);

          class t_TLEConstants {
          public:
            PyObject_HEAD
            TLEConstants object;
            static PyObject *wrap_Object(const TLEConstants&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
