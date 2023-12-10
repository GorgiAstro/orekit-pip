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
                mid_init$_01fb2c777e5def32,
                mid_getAf0_dff5885c2c873297,
                mid_getAf1_dff5885c2c873297,
                mid_getAngularVelocity_dff5885c2c873297,
                mid_getCycleDuration_dff5885c2c873297,
                mid_getDate_85703d13e302437e,
                mid_getE_dff5885c2c873297,
                mid_getI0_dff5885c2c873297,
                mid_getM0_dff5885c2c873297,
                mid_getMu_dff5885c2c873297,
                mid_getOmega0_dff5885c2c873297,
                mid_getOmegaDot_dff5885c2c873297,
                mid_getPRN_570ce0828f81a2c1,
                mid_getPa_dff5885c2c873297,
                mid_getSma_dff5885c2c873297,
                mid_getTime_dff5885c2c873297,
                mid_getWeek_570ce0828f81a2c1,
                mid_setAf0_17db3a65980d3441,
                mid_setAf1_17db3a65980d3441,
                mid_setDate_600a2a61652bc473,
                mid_setE_17db3a65980d3441,
                mid_setI0_17db3a65980d3441,
                mid_setM0_17db3a65980d3441,
                mid_setOmega0_17db3a65980d3441,
                mid_setOmegaDot_17db3a65980d3441,
                mid_setPRN_99803b0791f320ff,
                mid_setPa_17db3a65980d3441,
                mid_setSma_17db3a65980d3441,
                mid_setTime_17db3a65980d3441,
                mid_setWeek_99803b0791f320ff,
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
