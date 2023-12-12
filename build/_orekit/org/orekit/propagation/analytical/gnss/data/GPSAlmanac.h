#ifndef org_orekit_propagation_analytical_gnss_data_GPSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_GPSAlmanac_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GNSSClockElements;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            class GPSAlmanac : public ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_getHealth_412668abc8d889e9,
                mid_getSVN_412668abc8d889e9,
                mid_getSatConfiguration_412668abc8d889e9,
                mid_getSource_3cffd47377eca18a,
                mid_getTGD_557b8123390d8d0c,
                mid_getURA_412668abc8d889e9,
                mid_setHealth_a3da1a935cb37f7b,
                mid_setSVN_a3da1a935cb37f7b,
                mid_setSatConfiguration_a3da1a935cb37f7b,
                mid_setSource_f5ffdf29129ef90a,
                mid_setSqrtA_10f281d777284cea,
                mid_setURA_a3da1a935cb37f7b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GPSAlmanac(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GPSAlmanac(const GPSAlmanac& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {}

              GPSAlmanac();

              jint getHealth() const;
              jint getSVN() const;
              jint getSatConfiguration() const;
              ::java::lang::String getSource() const;
              jdouble getTGD() const;
              jint getURA() const;
              void setHealth(jint) const;
              void setSVN(jint) const;
              void setSatConfiguration(jint) const;
              void setSource(const ::java::lang::String &) const;
              void setSqrtA(jdouble) const;
              void setURA(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(GPSAlmanac);
            extern PyTypeObject *PY_TYPE(GPSAlmanac);

            class t_GPSAlmanac {
            public:
              PyObject_HEAD
              GPSAlmanac object;
              static PyObject *wrap_Object(const GPSAlmanac&);
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
