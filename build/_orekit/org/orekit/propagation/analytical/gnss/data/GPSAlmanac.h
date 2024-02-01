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
                mid_init$_ff7cb6c242604316,
                mid_getHealth_d6ab429752e7c267,
                mid_getSVN_d6ab429752e7c267,
                mid_getSatConfiguration_d6ab429752e7c267,
                mid_getSource_d2c8eb4129821f0e,
                mid_getTGD_9981f74b2d109da6,
                mid_getURA_d6ab429752e7c267,
                mid_setHealth_8fd427ab23829bf5,
                mid_setSVN_8fd427ab23829bf5,
                mid_setSatConfiguration_8fd427ab23829bf5,
                mid_setSource_105e1eadb709d9ac,
                mid_setSqrtA_1ad26e8c8c0cd65b,
                mid_setURA_8fd427ab23829bf5,
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
