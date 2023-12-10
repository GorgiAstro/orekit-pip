#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace data {
      class DataContext;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GLONASSAnalyticalPropagator;
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
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

            class GLONASSAlmanac : public ::java::lang::Object {
             public:
              enum {
                mid_init$_06c4a4bb4a52cbb6,
                mid_init$_aa72820258331840,
                mid_getDate_aaa854c403487cf3,
                mid_getDeltaI_456d9a2f64d6b28d,
                mid_getDeltaT_456d9a2f64d6b28d,
                mid_getDeltaTDot_456d9a2f64d6b28d,
                mid_getE_456d9a2f64d6b28d,
                mid_getFrequencyChannel_f2f64475e4580546,
                mid_getGPS2Glo_456d9a2f64d6b28d,
                mid_getGlo2UTC_456d9a2f64d6b28d,
                mid_getGloOffset_456d9a2f64d6b28d,
                mid_getHealth_f2f64475e4580546,
                mid_getLambda_456d9a2f64d6b28d,
                mid_getN4_f2f64475e4580546,
                mid_getNa_f2f64475e4580546,
                mid_getPa_456d9a2f64d6b28d,
                mid_getPropagator_5d976fca9b951997,
                mid_getPropagator_4c2baddb9a889e9e,
                mid_getPropagator_7a1576b7ec59009e,
                mid_getTime_456d9a2f64d6b28d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GLONASSAlmanac(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GLONASSAlmanac(const GLONASSAlmanac& obj) : ::java::lang::Object(obj) {}

              GLONASSAlmanac(jint, jint, jint, jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
              GLONASSAlmanac(jint, jint, jint, jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::time::TimeScale &);

              ::org::orekit::time::AbsoluteDate getDate() const;
              jdouble getDeltaI() const;
              jdouble getDeltaT() const;
              jdouble getDeltaTDot() const;
              jdouble getE() const;
              jint getFrequencyChannel() const;
              jdouble getGPS2Glo() const;
              jdouble getGlo2UTC() const;
              jdouble getGloOffset() const;
              jint getHealth() const;
              jdouble getLambda() const;
              jint getN4() const;
              jint getNa() const;
              jdouble getPa() const;
              ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator getPropagator() const;
              ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator getPropagator(const ::org::orekit::data::DataContext &) const;
              ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator getPropagator(const ::org::orekit::data::DataContext &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, jdouble) const;
              jdouble getTime() const;
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
            extern PyType_Def PY_TYPE_DEF(GLONASSAlmanac);
            extern PyTypeObject *PY_TYPE(GLONASSAlmanac);

            class t_GLONASSAlmanac {
            public:
              PyObject_HEAD
              GLONASSAlmanac object;
              static PyObject *wrap_Object(const GLONASSAlmanac&);
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
