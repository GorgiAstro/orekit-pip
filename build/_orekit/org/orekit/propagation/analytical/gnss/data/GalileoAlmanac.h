#ifndef org_orekit_propagation_analytical_gnss_data_GalileoAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_GalileoAlmanac_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"

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

            class GalileoAlmanac : public ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_getHealthE1_55546ef6a647f39b,
                mid_getHealthE5a_55546ef6a647f39b,
                mid_getHealthE5b_55546ef6a647f39b,
                mid_getIOD_55546ef6a647f39b,
                mid_setDeltaInc_8ba9fe7a847cecad,
                mid_setDeltaSqrtA_8ba9fe7a847cecad,
                mid_setHealthE1_44ed599e93e8a30c,
                mid_setHealthE5a_44ed599e93e8a30c,
                mid_setHealthE5b_44ed599e93e8a30c,
                mid_setIOD_44ed599e93e8a30c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GalileoAlmanac(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GalileoAlmanac(const GalileoAlmanac& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {}

              GalileoAlmanac();

              jint getHealthE1() const;
              jint getHealthE5a() const;
              jint getHealthE5b() const;
              jint getIOD() const;
              void setDeltaInc(jdouble) const;
              void setDeltaSqrtA(jdouble) const;
              void setHealthE1(jint) const;
              void setHealthE5a(jint) const;
              void setHealthE5b(jint) const;
              void setIOD(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(GalileoAlmanac);
            extern PyTypeObject *PY_TYPE(GalileoAlmanac);

            class t_GalileoAlmanac {
            public:
              PyObject_HEAD
              GalileoAlmanac object;
              static PyObject *wrap_Object(const GalileoAlmanac&);
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
