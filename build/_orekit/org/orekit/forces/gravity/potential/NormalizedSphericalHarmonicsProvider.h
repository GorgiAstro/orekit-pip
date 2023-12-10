#ifndef org_orekit_forces_gravity_potential_NormalizedSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_NormalizedSphericalHarmonicsProvider_H

#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;
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

          class NormalizedSphericalHarmonicsProvider : public ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider {
           public:
            enum {
              mid_onDate_5d593e1d60308d01,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizedSphericalHarmonicsProvider(jobject obj) : ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NormalizedSphericalHarmonicsProvider(const NormalizedSphericalHarmonicsProvider& obj) : ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(NormalizedSphericalHarmonicsProvider);

          class t_NormalizedSphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            NormalizedSphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const NormalizedSphericalHarmonicsProvider&);
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
