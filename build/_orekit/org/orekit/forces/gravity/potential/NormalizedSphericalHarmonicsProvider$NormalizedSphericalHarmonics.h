#ifndef org_orekit_forces_gravity_potential_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_H
#define org_orekit_forces_gravity_potential_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_H

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

          class NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics : public ::org::orekit::time::TimeStamped {
           public:
            enum {
              mid_getNormalizedCnm_a84e4ee1da3f1ab8,
              mid_getNormalizedSnm_a84e4ee1da3f1ab8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(const NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics& obj) : ::org::orekit::time::TimeStamped(obj) {}

            jdouble getNormalizedCnm(jint, jint) const;
            jdouble getNormalizedSnm(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics);
          extern PyTypeObject *PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics);

          class t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics {
          public:
            PyObject_HEAD
            NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics object;
            static PyObject *wrap_Object(const NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics&);
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
