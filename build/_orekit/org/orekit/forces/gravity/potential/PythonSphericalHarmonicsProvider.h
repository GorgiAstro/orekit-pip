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
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class SphericalHarmonicsProvider;
          class TideSystem;
        }
      }
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_getAe_b74f83833fdad017,
              mid_getMaxDegree_55546ef6a647f39b,
              mid_getMaxOrder_55546ef6a647f39b,
              mid_getMu_b74f83833fdad017,
              mid_getReferenceDate_c325492395d89b24,
              mid_getTideSystem_b2b14af197a8eaf6,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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
