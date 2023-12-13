#ifndef org_orekit_forces_gravity_potential_RawSphericalHarmonicsProvider$RawSphericalHarmonics_H
#define org_orekit_forces_gravity_potential_RawSphericalHarmonicsProvider$RawSphericalHarmonics_H

#include "org/orekit/time/TimeStamped.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class RawSphericalHarmonicsProvider$RawSphericalHarmonics : public ::org::orekit::time::TimeStamped {
           public:
            enum {
              mid_getRawCnm_cad98089d00f8a5b,
              mid_getRawSnm_cad98089d00f8a5b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RawSphericalHarmonicsProvider$RawSphericalHarmonics(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RawSphericalHarmonicsProvider$RawSphericalHarmonics(const RawSphericalHarmonicsProvider$RawSphericalHarmonics& obj) : ::org::orekit::time::TimeStamped(obj) {}

            jdouble getRawCnm(jint, jint) const;
            jdouble getRawSnm(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics);
          extern PyTypeObject *PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics);

          class t_RawSphericalHarmonicsProvider$RawSphericalHarmonics {
          public:
            PyObject_HEAD
            RawSphericalHarmonicsProvider$RawSphericalHarmonics object;
            static PyObject *wrap_Object(const RawSphericalHarmonicsProvider$RawSphericalHarmonics&);
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
