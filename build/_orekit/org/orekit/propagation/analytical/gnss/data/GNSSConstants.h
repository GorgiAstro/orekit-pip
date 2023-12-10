#ifndef org_orekit_propagation_analytical_gnss_data_GNSSConstants_H
#define org_orekit_propagation_analytical_gnss_data_GNSSConstants_H

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
        namespace gnss {
          namespace data {

            class GNSSConstants : public ::java::lang::Object {
             public:

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GNSSConstants(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GNSSConstants(const GNSSConstants& obj) : ::java::lang::Object(obj) {}

              static jdouble BEIDOU_AV;
              static jdouble BEIDOU_MU;
              static jint BEIDOU_WEEK_NB;
              static jdouble GALILEO_AV;
              static jdouble GALILEO_MU;
              static jint GALILEO_WEEK_NB;
              static jdouble GLONASS_MU;
              static jdouble GLONASS_PI;
              static jdouble GNSS_PI;
              static jdouble GNSS_WEEK_IN_SECONDS;
              static jdouble GPS_AV;
              static jdouble GPS_MU;
              static jint GPS_WEEK_NB;
              static jdouble IRNSS_AV;
              static jdouble IRNSS_MU;
              static jint IRNSS_WEEK_NB;
              static jdouble QZSS_AV;
              static jdouble QZSS_MU;
              static jint QZSS_WEEK_NB;
              static jdouble SBAS_MU;
            };
          }
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
        namespace gnss {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(GNSSConstants);
            extern PyTypeObject *PY_TYPE(GNSSConstants);

            class t_GNSSConstants {
            public:
              PyObject_HEAD
              GNSSConstants object;
              static PyObject *wrap_Object(const GNSSConstants&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
