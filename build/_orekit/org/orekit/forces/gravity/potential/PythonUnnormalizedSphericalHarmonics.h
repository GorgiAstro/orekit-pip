#ifndef org_orekit_forces_gravity_potential_PythonUnnormalizedSphericalHarmonics_H
#define org_orekit_forces_gravity_potential_PythonUnnormalizedSphericalHarmonics_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
        }
      }
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
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_getDate_80e11148db499dda,
              mid_getUnnormalizedCnm_6d920aab27f0a3d2,
              mid_getUnnormalizedSnm_6d920aab27f0a3d2,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
