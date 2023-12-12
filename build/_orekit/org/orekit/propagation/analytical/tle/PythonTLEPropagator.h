#ifndef org_orekit_propagation_analytical_tle_PythonTLEPropagator_H
#define org_orekit_propagation_analytical_tle_PythonTLEPropagator_H

#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class PythonTLEPropagator : public ::org::orekit::propagation::analytical::tle::TLEPropagator {
           public:
            enum {
              mid_init$_c15edfeff3b77424,
              mid_init$_2f68d31a9dcd927c,
              mid_finalize_0640e6acf969ed28,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              mid_sxpInitialize_0640e6acf969ed28,
              mid_sxpPropagate_10f281d777284cea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonTLEPropagator(jobject obj) : ::org::orekit::propagation::analytical::tle::TLEPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonTLEPropagator(const PythonTLEPropagator& obj) : ::org::orekit::propagation::analytical::tle::TLEPropagator(obj) {}

            PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble);
            PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::frames::Frame &);

            void finalize() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            void sxpInitialize() const;
            void sxpPropagate(jdouble) const;
          };
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
        namespace tle {
          extern PyType_Def PY_TYPE_DEF(PythonTLEPropagator);
          extern PyTypeObject *PY_TYPE(PythonTLEPropagator);

          class t_PythonTLEPropagator {
          public:
            PyObject_HEAD
            PythonTLEPropagator object;
            static PyObject *wrap_Object(const PythonTLEPropagator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
