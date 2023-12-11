#ifndef org_orekit_forces_gravity_potential_PythonSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_PythonSphericalHarmonicsProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class TideSystem;
          class SphericalHarmonicsProvider;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonSphericalHarmonicsProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getAe_557b8123390d8d0c,
              mid_getMaxDegree_412668abc8d889e9,
              mid_getMaxOrder_412668abc8d889e9,
              mid_getMu_557b8123390d8d0c,
              mid_getReferenceDate_7a97f7e149e79afb,
              mid_getTideSystem_7d9a2a298dcb49fa,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSphericalHarmonicsProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonSphericalHarmonicsProvider(const PythonSphericalHarmonicsProvider& obj) : ::java::lang::Object(obj) {}

            PythonSphericalHarmonicsProvider();

            void finalize() const;
            jdouble getAe() const;
            jint getMaxDegree() const;
            jint getMaxOrder() const;
            jdouble getMu() const;
            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
            ::org::orekit::forces::gravity::potential::TideSystem getTideSystem() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          extern PyType_Def PY_TYPE_DEF(PythonSphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(PythonSphericalHarmonicsProvider);

          class t_PythonSphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            PythonSphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const PythonSphericalHarmonicsProvider&);
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
