#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace data {
      class DataContext;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
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
                mid_init$_db78ca712b0ab225,
                mid_init$_07ce4eba6dbba556,
                mid_getDate_80e11148db499dda,
                mid_getDeltaI_9981f74b2d109da6,
                mid_getDeltaT_9981f74b2d109da6,
                mid_getDeltaTDot_9981f74b2d109da6,
                mid_getE_9981f74b2d109da6,
                mid_getFrequencyChannel_d6ab429752e7c267,
                mid_getGPS2Glo_9981f74b2d109da6,
                mid_getGlo2UTC_9981f74b2d109da6,
                mid_getGloOffset_9981f74b2d109da6,
                mid_getHealth_d6ab429752e7c267,
                mid_getLambda_9981f74b2d109da6,
                mid_getN4_d6ab429752e7c267,
                mid_getNa_d6ab429752e7c267,
                mid_getPa_9981f74b2d109da6,
                mid_getPropagator_395024687c74c4c6,
                mid_getPropagator_54aafda0be43f095,
                mid_getPropagator_355ae83e2e2ce3b9,
                mid_getTime_9981f74b2d109da6,
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
