#ifndef org_orekit_forces_gravity_potential_CachedNormalizedSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_CachedNormalizedSphericalHarmonicsProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class NormalizedSphericalHarmonicsProvider;
          class NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;
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
              mid_init$_b7e79a1d0b13bbb3,
              mid_getAe_dff5885c2c873297,
              mid_getMaxDegree_570ce0828f81a2c1,
              mid_getMaxOrder_570ce0828f81a2c1,
              mid_getMu_dff5885c2c873297,
              mid_getReferenceDate_85703d13e302437e,
              mid_getTideSystem_c68abf1ca1fc273e,
              mid_onDate_58c777cdeb3bd479,
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
