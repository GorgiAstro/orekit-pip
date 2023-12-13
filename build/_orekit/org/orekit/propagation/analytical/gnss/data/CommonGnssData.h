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
                mid_init$_2aa803b9073e6a76,
                mid_getAf0_b74f83833fdad017,
                mid_getAf1_b74f83833fdad017,
                mid_getAngularVelocity_b74f83833fdad017,
                mid_getCycleDuration_b74f83833fdad017,
                mid_getDate_c325492395d89b24,
                mid_getE_b74f83833fdad017,
                mid_getI0_b74f83833fdad017,
                mid_getM0_b74f83833fdad017,
                mid_getMu_b74f83833fdad017,
                mid_getOmega0_b74f83833fdad017,
                mid_getOmegaDot_b74f83833fdad017,
                mid_getPRN_55546ef6a647f39b,
                mid_getPa_b74f83833fdad017,
                mid_getSma_b74f83833fdad017,
                mid_getTime_b74f83833fdad017,
                mid_getWeek_55546ef6a647f39b,
                mid_setAf0_8ba9fe7a847cecad,
                mid_setAf1_8ba9fe7a847cecad,
                mid_setDate_02135a6ef25adb4b,
                mid_setE_8ba9fe7a847cecad,
                mid_setI0_8ba9fe7a847cecad,
                mid_setM0_8ba9fe7a847cecad,
                mid_setOmega0_8ba9fe7a847cecad,
                mid_setOmegaDot_8ba9fe7a847cecad,
                mid_setPRN_44ed599e93e8a30c,
                mid_setPa_8ba9fe7a847cecad,
                mid_setSma_8ba9fe7a847cecad,
                mid_setTime_8ba9fe7a847cecad,
                mid_setWeek_44ed599e93e8a30c,
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
