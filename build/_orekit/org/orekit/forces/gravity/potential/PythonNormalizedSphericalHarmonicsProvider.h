#ifndef org_orekit_forces_gravity_potential_PythonNormalizedSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_PythonNormalizedSphericalHarmonicsProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;
          class NormalizedSphericalHarmonicsProvider;
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

          class PythonNormalizedSphericalHarmonicsProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_finalize_7ae3461a92a43152,
              mid_getAe_456d9a2f64d6b28d,
              mid_getMaxDegree_f2f64475e4580546,
              mid_getMaxOrder_f2f64475e4580546,
              mid_getMu_456d9a2f64d6b28d,
              mid_getReferenceDate_aaa854c403487cf3,
              mid_getTideSystem_b3b39360f3c8a6ac,
              mid_onDate_5d593e1d60308d01,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonNormalizedSphericalHarmonicsProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonNormalizedSphericalHarmonicsProvider(const PythonNormalizedSphericalHarmonicsProvider& obj) : ::java::lang::Object(obj) {}

            PythonNormalizedSphericalHarmonicsProvider();

            void finalize() const;
            jdouble getAe() const;
            jint getMaxDegree() const;
            jint getMaxOrder() const;
            jdouble getMu() const;
            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
            ::org::orekit::forces::gravity::potential::TideSystem getTideSystem() const;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics onDate(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonNormalizedSphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(PythonNormalizedSphericalHarmonicsProvider);

          class t_PythonNormalizedSphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            PythonNormalizedSphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const PythonNormalizedSphericalHarmonicsProvider&);
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