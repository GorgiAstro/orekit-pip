#ifndef org_orekit_forces_gravity_potential_UnnormalizedSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_UnnormalizedSphericalHarmonicsProvider_H

#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;
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

          class UnnormalizedSphericalHarmonicsProvider : public ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider {
           public:
            enum {
              mid_onDate_c2c9ac25aaca78ce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnnormalizedSphericalHarmonicsProvider(jobject obj) : ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnnormalizedSphericalHarmonicsProvider(const UnnormalizedSphericalHarmonicsProvider& obj) : ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider(obj) {}

            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics onDate(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(UnnormalizedSphericalHarmonicsProvider);

          class t_UnnormalizedSphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            UnnormalizedSphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const UnnormalizedSphericalHarmonicsProvider&);
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
