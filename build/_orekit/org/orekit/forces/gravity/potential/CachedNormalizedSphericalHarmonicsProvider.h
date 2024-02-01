#ifndef org_orekit_forces_gravity_potential_CachedNormalizedSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_CachedNormalizedSphericalHarmonicsProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;
          class TideSystem;
          class NormalizedSphericalHarmonicsProvider;
        }
      }
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
              mid_init$_ce34ee8e438d90f5,
              mid_getAe_9981f74b2d109da6,
              mid_getMaxDegree_d6ab429752e7c267,
              mid_getMaxOrder_d6ab429752e7c267,
              mid_getMu_9981f74b2d109da6,
              mid_getReferenceDate_80e11148db499dda,
              mid_getTideSystem_1e0f912623cd4841,
              mid_onDate_eb84deac0f960db9,
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
