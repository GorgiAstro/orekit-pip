#ifndef org_orekit_forces_gravity_potential_PythonUnnormalizedSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_PythonUnnormalizedSphericalHarmonicsProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
          class TideSystem;
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
    class Throwable;
    class Class;
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
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_getAe_9981f74b2d109da6,
              mid_getMaxDegree_d6ab429752e7c267,
              mid_getMaxOrder_d6ab429752e7c267,
              mid_getMu_9981f74b2d109da6,
              mid_getReferenceDate_80e11148db499dda,
              mid_getTideSystem_1e0f912623cd4841,
              mid_onDate_e3154aa04494b880,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
