#ifndef org_orekit_forces_gravity_potential_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_H
#define org_orekit_forces_gravity_potential_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_H

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

          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics : public ::org::orekit::time::TimeStamped {
           public:
            enum {
              mid_getUnnormalizedCnm_dbbe5f05149dbf73,
              mid_getUnnormalizedSnm_dbbe5f05149dbf73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(const UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics& obj) : ::org::orekit::time::TimeStamped(obj) {}

            jdouble getUnnormalizedCnm(jint, jint) const;
            jdouble getUnnormalizedSnm(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics);
          extern PyTypeObject *PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics);

          class t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics {
          public:
            PyObject_HEAD
            UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics object;
            static PyObject *wrap_Object(const UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics&);
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
