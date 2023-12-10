#ifndef org_orekit_propagation_analytical_gnss_data_GPSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_GPSAlmanac_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"

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
namespace java {
  namespace lang {
    class String;
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

            class GPSAlmanac : public ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac {
             public:
              enum {
                mid_init$_0fa09c18fee449d5,
                mid_getHealth_570ce0828f81a2c1,
                mid_getSVN_570ce0828f81a2c1,
                mid_getSatConfiguration_570ce0828f81a2c1,
                mid_getSource_11b109bd155ca898,
                mid_getTGD_dff5885c2c873297,
                mid_getURA_570ce0828f81a2c1,
                mid_setHealth_99803b0791f320ff,
                mid_setSVN_99803b0791f320ff,
                mid_setSatConfiguration_99803b0791f320ff,
                mid_setSource_d0bc48d5b00dc40c,
                mid_setSqrtA_17db3a65980d3441,
                mid_setURA_99803b0791f320ff,
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
