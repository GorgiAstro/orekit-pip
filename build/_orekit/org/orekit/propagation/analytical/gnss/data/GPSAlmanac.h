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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getHealth_55546ef6a647f39b,
                mid_getSVN_55546ef6a647f39b,
                mid_getSatConfiguration_55546ef6a647f39b,
                mid_getSource_1c1fa1e935d6cdcf,
                mid_getTGD_b74f83833fdad017,
                mid_getURA_55546ef6a647f39b,
                mid_setHealth_44ed599e93e8a30c,
                mid_setSVN_44ed599e93e8a30c,
                mid_setSatConfiguration_44ed599e93e8a30c,
                mid_setSource_734b91ac30d5f9b4,
                mid_setSqrtA_8ba9fe7a847cecad,
                mid_setURA_44ed599e93e8a30c,
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
