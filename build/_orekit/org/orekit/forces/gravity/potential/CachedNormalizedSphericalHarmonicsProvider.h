#ifndef org_orekit_forces_gravity_potential_CachedNormalizedSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_CachedNormalizedSphericalHarmonicsProvider_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class CachedNormalizedSphericalHarmonicsProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_118e177f3e704967,
              mid_getAe_456d9a2f64d6b28d,
              mid_getMaxDegree_f2f64475e4580546,
              mid_getMaxOrder_f2f64475e4580546,
              mid_getMu_456d9a2f64d6b28d,
              mid_getReferenceDate_aaa854c403487cf3,
              mid_getTideSystem_b3b39360f3c8a6ac,
              mid_onDate_5d593e1d60308d01,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CachedNormalizedSphericalHarmonicsProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CachedNormalizedSphericalHarmonicsProvider(const CachedNormalizedSphericalHarmonicsProvider& obj) : ::java::lang::Object(obj) {}

            CachedNormalizedSphericalHarmonicsProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider &, jdouble, jint, jint, jdouble, jdouble);

            jdouble getAe() const;
            jint getMaxDegree() const;
            jint getMaxOrder() const;
            jdouble getMu() const;
            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
            ::org::orekit::forces::gravity::potential::TideSystem getTideSystem() const;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics onDate(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(CachedNormalizedSphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(CachedNormalizedSphericalHarmonicsProvider);

          class t_CachedNormalizedSphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            CachedNormalizedSphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const CachedNormalizedSphericalHarmonicsProvider&);
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
