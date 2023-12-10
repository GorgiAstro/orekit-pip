#ifndef org_orekit_propagation_analytical_gnss_data_CommonGnssData_H
#define org_orekit_propagation_analytical_gnss_data_CommonGnssData_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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

            class CommonGnssData : public ::java::lang::Object {
             public:
              enum {
                mid_init$_b05c288d5068eccb,
                mid_getAf0_456d9a2f64d6b28d,
                mid_getAf1_456d9a2f64d6b28d,
                mid_getAngularVelocity_456d9a2f64d6b28d,
                mid_getCycleDuration_456d9a2f64d6b28d,
                mid_getDate_aaa854c403487cf3,
                mid_getE_456d9a2f64d6b28d,
                mid_getI0_456d9a2f64d6b28d,
                mid_getM0_456d9a2f64d6b28d,
                mid_getMu_456d9a2f64d6b28d,
                mid_getOmega0_456d9a2f64d6b28d,
                mid_getOmegaDot_456d9a2f64d6b28d,
                mid_getPRN_f2f64475e4580546,
                mid_getPa_456d9a2f64d6b28d,
                mid_getSma_456d9a2f64d6b28d,
                mid_getTime_456d9a2f64d6b28d,
                mid_getWeek_f2f64475e4580546,
                mid_setAf0_77e0f9a1f260e2e5,
                mid_setAf1_77e0f9a1f260e2e5,
                mid_setDate_e82d68cd9f886886,
                mid_setE_77e0f9a1f260e2e5,
                mid_setI0_77e0f9a1f260e2e5,
                mid_setM0_77e0f9a1f260e2e5,
                mid_setOmega0_77e0f9a1f260e2e5,
                mid_setOmegaDot_77e0f9a1f260e2e5,
                mid_setPRN_0a2a1ac2721c0336,
                mid_setPa_77e0f9a1f260e2e5,
                mid_setSma_77e0f9a1f260e2e5,
                mid_setTime_77e0f9a1f260e2e5,
                mid_setWeek_0a2a1ac2721c0336,
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
