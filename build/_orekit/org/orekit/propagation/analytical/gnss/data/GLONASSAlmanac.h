#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Frame;
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
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace attitudes {
      class AttitudeProvider;
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
                mid_init$_927876482883ca32,
                mid_init$_7f68134dc9a2ca41,
                mid_getDate_85703d13e302437e,
                mid_getDeltaI_dff5885c2c873297,
                mid_getDeltaT_dff5885c2c873297,
                mid_getDeltaTDot_dff5885c2c873297,
                mid_getE_dff5885c2c873297,
                mid_getFrequencyChannel_570ce0828f81a2c1,
                mid_getGPS2Glo_dff5885c2c873297,
                mid_getGlo2UTC_dff5885c2c873297,
                mid_getGloOffset_dff5885c2c873297,
                mid_getHealth_570ce0828f81a2c1,
                mid_getLambda_dff5885c2c873297,
                mid_getN4_570ce0828f81a2c1,
                mid_getNa_570ce0828f81a2c1,
                mid_getPa_dff5885c2c873297,
                mid_getPropagator_169032d2e880ec70,
                mid_getPropagator_5f8b38de0b54bda6,
                mid_getPropagator_94b5f5c6e1c39dbc,
                mid_getTime_dff5885c2c873297,
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
