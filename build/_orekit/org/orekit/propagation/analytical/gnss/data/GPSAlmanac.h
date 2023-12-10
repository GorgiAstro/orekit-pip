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
                mid_init$_7ae3461a92a43152,
                mid_getHealth_f2f64475e4580546,
                mid_getSVN_f2f64475e4580546,
                mid_getSatConfiguration_f2f64475e4580546,
                mid_getSource_0090f7797e403f43,
                mid_getTGD_456d9a2f64d6b28d,
                mid_getURA_f2f64475e4580546,
                mid_setHealth_0a2a1ac2721c0336,
                mid_setSVN_0a2a1ac2721c0336,
                mid_setSatConfiguration_0a2a1ac2721c0336,
                mid_setSource_e939c6558ae8d313,
                mid_setSqrtA_77e0f9a1f260e2e5,
                mid_setURA_0a2a1ac2721c0336,
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
