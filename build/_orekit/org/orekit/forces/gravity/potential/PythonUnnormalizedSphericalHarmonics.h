#ifndef org_orekit_forces_gravity_potential_PythonUnnormalizedSphericalHarmonics_H
#define org_orekit_forces_gravity_potential_PythonUnnormalizedSphericalHarmonics_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonUnnormalizedSphericalHarmonics : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getDate_7a97f7e149e79afb,
              mid_getUnnormalizedCnm_21b81d54c06b64b0,
              mid_getUnnormalizedSnm_21b81d54c06b64b0,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonUnnormalizedSphericalHarmonics(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonUnnormalizedSphericalHarmonics(const PythonUnnormalizedSphericalHarmonics& obj) : ::java::lang::Object(obj) {}

            PythonUnnormalizedSphericalHarmonics();

            void finalize() const;
            ::org::orekit::time::AbsoluteDate getDate() const;
            jdouble getUnnormalizedCnm(jint, jint) const;
            jdouble getUnnormalizedSnm(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonics);
          extern PyTypeObject *PY_TYPE(PythonUnnormalizedSphericalHarmonics);

          class t_PythonUnnormalizedSphericalHarmonics {
          public:
            PyObject_HEAD
            PythonUnnormalizedSphericalHarmonics object;
            static PyObject *wrap_Object(const PythonUnnormalizedSphericalHarmonics&);
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
