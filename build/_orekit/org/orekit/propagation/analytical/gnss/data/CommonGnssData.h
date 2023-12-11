#ifndef org_orekit_propagation_analytical_gnss_data_CommonGnssData_H
#define org_orekit_propagation_analytical_gnss_data_CommonGnssData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
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

            class CommonGnssData : public ::java::lang::Object {
             public:
              enum {
                mid_init$_427af08acba367ca,
                mid_getAf0_557b8123390d8d0c,
                mid_getAf1_557b8123390d8d0c,
                mid_getAngularVelocity_557b8123390d8d0c,
                mid_getCycleDuration_557b8123390d8d0c,
                mid_getDate_7a97f7e149e79afb,
                mid_getE_557b8123390d8d0c,
                mid_getI0_557b8123390d8d0c,
                mid_getM0_557b8123390d8d0c,
                mid_getMu_557b8123390d8d0c,
                mid_getOmega0_557b8123390d8d0c,
                mid_getOmegaDot_557b8123390d8d0c,
                mid_getPRN_412668abc8d889e9,
                mid_getPa_557b8123390d8d0c,
                mid_getSma_557b8123390d8d0c,
                mid_getTime_557b8123390d8d0c,
                mid_getWeek_412668abc8d889e9,
                mid_setAf0_10f281d777284cea,
                mid_setAf1_10f281d777284cea,
                mid_setDate_20affcbd28542333,
                mid_setE_10f281d777284cea,
                mid_setI0_10f281d777284cea,
                mid_setM0_10f281d777284cea,
                mid_setOmega0_10f281d777284cea,
                mid_setOmegaDot_10f281d777284cea,
                mid_setPRN_a3da1a935cb37f7b,
                mid_setPa_10f281d777284cea,
                mid_setSma_10f281d777284cea,
                mid_setTime_10f281d777284cea,
                mid_setWeek_a3da1a935cb37f7b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CommonGnssData(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CommonGnssData(const CommonGnssData& obj) : ::java::lang::Object(obj) {}

              CommonGnssData(jdouble, jdouble, jint);

              jdouble getAf0() const;
              jdouble getAf1() const;
              jdouble getAngularVelocity() const;
              jdouble getCycleDuration() const;
              ::org::orekit::time::AbsoluteDate getDate() const;
              jdouble getE() const;
              jdouble getI0() const;
              jdouble getM0() const;
              jdouble getMu() const;
              jdouble getOmega0() const;
              jdouble getOmegaDot() const;
              jint getPRN() const;
              jdouble getPa() const;
              jdouble getSma() const;
              jdouble getTime() const;
              jint getWeek() const;
              void setAf0(jdouble) const;
              void setAf1(jdouble) const;
              void setDate(const ::org::orekit::time::AbsoluteDate &) const;
              void setE(jdouble) const;
              void setI0(jdouble) const;
              void setM0(jdouble) const;
              void setOmega0(jdouble) const;
              void setOmegaDot(jdouble) const;
              void setPRN(jint) const;
              void setPa(jdouble) const;
              void setSma(jdouble) const;
              void setTime(jdouble) const;
              void setWeek(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(CommonGnssData);
            extern PyTypeObject *PY_TYPE(CommonGnssData);

            class t_CommonGnssData {
            public:
              PyObject_HEAD
              CommonGnssData object;
              static PyObject *wrap_Object(const CommonGnssData&);
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
