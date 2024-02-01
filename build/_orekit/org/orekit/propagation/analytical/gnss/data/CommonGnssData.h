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
                mid_init$_905e65280a4e6722,
                mid_getAf0_9981f74b2d109da6,
                mid_getAf1_9981f74b2d109da6,
                mid_getAngularVelocity_9981f74b2d109da6,
                mid_getCycleDuration_9981f74b2d109da6,
                mid_getDate_80e11148db499dda,
                mid_getE_9981f74b2d109da6,
                mid_getI0_9981f74b2d109da6,
                mid_getM0_9981f74b2d109da6,
                mid_getMu_9981f74b2d109da6,
                mid_getOmega0_9981f74b2d109da6,
                mid_getOmegaDot_9981f74b2d109da6,
                mid_getPRN_d6ab429752e7c267,
                mid_getPa_9981f74b2d109da6,
                mid_getSma_9981f74b2d109da6,
                mid_getTime_9981f74b2d109da6,
                mid_getWeek_d6ab429752e7c267,
                mid_setAf0_1ad26e8c8c0cd65b,
                mid_setAf1_1ad26e8c8c0cd65b,
                mid_setDate_8497861b879c83f7,
                mid_setE_1ad26e8c8c0cd65b,
                mid_setI0_1ad26e8c8c0cd65b,
                mid_setM0_1ad26e8c8c0cd65b,
                mid_setOmega0_1ad26e8c8c0cd65b,
                mid_setOmegaDot_1ad26e8c8c0cd65b,
                mid_setPRN_8fd427ab23829bf5,
                mid_setPa_1ad26e8c8c0cd65b,
                mid_setSma_1ad26e8c8c0cd65b,
                mid_setTime_1ad26e8c8c0cd65b,
                mid_setWeek_8fd427ab23829bf5,
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
