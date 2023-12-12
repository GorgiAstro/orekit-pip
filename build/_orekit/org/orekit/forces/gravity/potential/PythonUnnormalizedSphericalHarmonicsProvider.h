#ifndef org_orekit_forces_gravity_potential_PythonUnnormalizedSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_PythonUnnormalizedSphericalHarmonicsProvider_H

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
          class UnnormalizedSphericalHarmonicsProvider;
          class TideSystem;
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
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

          class PythonUnnormalizedSphericalHarmonicsProvider : public ::java::lang::Object {
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
              mid_onDate_a4dc06866e3014fd,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonUnnormalizedSphericalHarmonicsProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonUnnormalizedSphericalHarmonicsProvider(const PythonUnnormalizedSphericalHarmonicsProvider& obj) : ::java::lang::Object(obj) {}

            PythonUnnormalizedSphericalHarmonicsProvider();

            void finalize() const;
            jdouble getAe() const;
            jint getMaxDegree() const;
            jint getMaxOrder() const;
            jdouble getMu() const;
            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
            ::org::orekit::forces::gravity::potential::TideSystem getTideSystem() const;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics onDate(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider);

          class t_PythonUnnormalizedSphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            PythonUnnormalizedSphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const PythonUnnormalizedSphericalHarmonicsProvider&);
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
