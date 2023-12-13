#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSAlmanac_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
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
                mid_init$_09f00792e3d036b2,
                mid_init$_1644e4348eb18835,
                mid_getDate_c325492395d89b24,
                mid_getDeltaI_b74f83833fdad017,
                mid_getDeltaT_b74f83833fdad017,
                mid_getDeltaTDot_b74f83833fdad017,
                mid_getE_b74f83833fdad017,
                mid_getFrequencyChannel_55546ef6a647f39b,
                mid_getGPS2Glo_b74f83833fdad017,
                mid_getGlo2UTC_b74f83833fdad017,
                mid_getGloOffset_b74f83833fdad017,
                mid_getHealth_55546ef6a647f39b,
                mid_getLambda_b74f83833fdad017,
                mid_getN4_55546ef6a647f39b,
                mid_getNa_55546ef6a647f39b,
                mid_getPa_b74f83833fdad017,
                mid_getPropagator_a20cc0364c67b639,
                mid_getPropagator_beebcb6a0015511d,
                mid_getPropagator_ae6608110afdf7e7,
                mid_getTime_b74f83833fdad017,
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
