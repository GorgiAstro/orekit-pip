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
                mid_init$_ff7cb6c242604316,
                mid_getHealthE1_d6ab429752e7c267,
                mid_getHealthE5a_d6ab429752e7c267,
                mid_getHealthE5b_d6ab429752e7c267,
                mid_getIOD_d6ab429752e7c267,
                mid_setDeltaInc_1ad26e8c8c0cd65b,
                mid_setDeltaSqrtA_1ad26e8c8c0cd65b,
                mid_setHealthE1_8fd427ab23829bf5,
                mid_setHealthE5a_8fd427ab23829bf5,
                mid_setHealthE5b_8fd427ab23829bf5,
                mid_setIOD_8fd427ab23829bf5,
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
