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
                mid_init$_0fa09c18fee449d5,
                mid_getHealthE1_570ce0828f81a2c1,
                mid_getHealthE5a_570ce0828f81a2c1,
                mid_getHealthE5b_570ce0828f81a2c1,
                mid_getIOD_570ce0828f81a2c1,
                mid_setDeltaInc_17db3a65980d3441,
                mid_setDeltaSqrtA_17db3a65980d3441,
                mid_setHealthE1_99803b0791f320ff,
                mid_setHealthE5a_99803b0791f320ff,
                mid_setHealthE5b_99803b0791f320ff,
                mid_setIOD_99803b0791f320ff,
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
