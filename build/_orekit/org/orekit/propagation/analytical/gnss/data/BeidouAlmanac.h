#ifndef org_orekit_propagation_analytical_gnss_data_BeidouAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_BeidouAlmanac_H

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

            class BeidouAlmanac : public ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_getHealth_55546ef6a647f39b,
                mid_setHealth_44ed599e93e8a30c,
                mid_setI0_369b4c97255d5afa,
                mid_setSqrtA_8ba9fe7a847cecad,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BeidouAlmanac(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BeidouAlmanac(const BeidouAlmanac& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {}

              BeidouAlmanac();

              jint getHealth() const;
              void setHealth(jint) const;
              void setI0(jdouble, jdouble) const;
              void setSqrtA(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(BeidouAlmanac);
            extern PyTypeObject *PY_TYPE(BeidouAlmanac);

            class t_BeidouAlmanac {
            public:
              PyObject_HEAD
              BeidouAlmanac object;
              static PyObject *wrap_Object(const BeidouAlmanac&);
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
