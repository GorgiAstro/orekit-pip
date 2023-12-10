#ifndef org_orekit_propagation_analytical_tle_PythonTLEPropagator_H
#define org_orekit_propagation_analytical_tle_PythonTLEPropagator_H

#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class PythonTLEPropagator : public ::org::orekit::propagation::analytical::tle::TLEPropagator {
           public:
            enum {
              mid_init$_3c209839d9f7d817,
              mid_init$_8edece06f32cbd33,
              mid_finalize_7ae3461a92a43152,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              mid_sxpInitialize_7ae3461a92a43152,
              mid_sxpPropagate_77e0f9a1f260e2e5,
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
