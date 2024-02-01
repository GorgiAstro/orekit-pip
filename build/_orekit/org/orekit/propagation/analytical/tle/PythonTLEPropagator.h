#ifndef org_orekit_propagation_analytical_tle_PythonTLEPropagator_H
#define org_orekit_propagation_analytical_tle_PythonTLEPropagator_H

#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
        }
      }
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
              mid_init$_40bdc63bf602b2a8,
              mid_init$_877f7a4f81da784a,
              mid_finalize_ff7cb6c242604316,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              mid_sxpInitialize_ff7cb6c242604316,
              mid_sxpPropagate_1ad26e8c8c0cd65b,
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
