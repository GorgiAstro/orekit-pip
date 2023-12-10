#ifndef org_orekit_forces_gravity_potential_PythonRawSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_PythonRawSphericalHarmonicsProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
          class RawSphericalHarmonicsProvider$RawSphericalHarmonics;
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

          class PythonRawSphericalHarmonicsProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_finalize_0fa09c18fee449d5,
              mid_getAe_dff5885c2c873297,
              mid_getMaxDegree_570ce0828f81a2c1,
              mid_getMaxOrder_570ce0828f81a2c1,
              mid_getMu_dff5885c2c873297,
              mid_getReferenceDate_85703d13e302437e,
              mid_getTideSystem_c68abf1ca1fc273e,
              mid_onDate_25793e429590ca38,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
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
