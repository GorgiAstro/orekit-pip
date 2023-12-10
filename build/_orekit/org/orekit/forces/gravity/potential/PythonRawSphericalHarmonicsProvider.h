#ifndef org_orekit_forces_gravity_potential_PythonRawSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_PythonRawSphericalHarmonicsProvider_H

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
          class RawSphericalHarmonicsProvider$RawSphericalHarmonics;
          class TideSystem;
          class RawSphericalHarmonicsProvider;
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

          class PythonRawSphericalHarmonicsProvider : public ::java::lang::Object {
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
              mid_onDate_e337a8de1b487ef8,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonRawSphericalHarmonicsProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonRawSphericalHarmonicsProvider(const PythonRawSphericalHarmonicsProvider& obj) : ::java::lang::Object(obj) {}

            PythonRawSphericalHarmonicsProvider();

            void finalize() const;
            jdouble getAe() const;
            jint getMaxDegree() const;
            jint getMaxOrder() const;
            jdouble getMu() const;
            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
            ::org::orekit::forces::gravity::potential::TideSystem getTideSystem() const;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics onDate(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonRawSphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(PythonRawSphericalHarmonicsProvider);

          class t_PythonRawSphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            PythonRawSphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const PythonRawSphericalHarmonicsProvider&);
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
