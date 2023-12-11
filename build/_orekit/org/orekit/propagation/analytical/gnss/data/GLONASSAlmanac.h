#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSOrbitalElements;
          }
          class GLONASSAnalyticalPropagator;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace data {
      class DataContext;
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
                mid_init$_31f65ec634981835,
                mid_init$_99e8e6be8e775c8e,
                mid_getDate_7a97f7e149e79afb,
                mid_getDeltaI_557b8123390d8d0c,
                mid_getDeltaT_557b8123390d8d0c,
                mid_getDeltaTDot_557b8123390d8d0c,
                mid_getE_557b8123390d8d0c,
                mid_getFrequencyChannel_412668abc8d889e9,
                mid_getGPS2Glo_557b8123390d8d0c,
                mid_getGlo2UTC_557b8123390d8d0c,
                mid_getGloOffset_557b8123390d8d0c,
                mid_getHealth_412668abc8d889e9,
                mid_getLambda_557b8123390d8d0c,
                mid_getN4_412668abc8d889e9,
                mid_getNa_412668abc8d889e9,
                mid_getPa_557b8123390d8d0c,
                mid_getPropagator_2bdec6e86d80c4e6,
                mid_getPropagator_fce7ee69a3542ac1,
                mid_getPropagator_16493e3d1f6bc90d,
                mid_getTime_557b8123390d8d0c,
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
