#ifndef org_orekit_forces_gravity_potential_RawSphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_RawSphericalHarmonicsProvider_H

#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider$RawSphericalHarmonics;
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

          class RawSphericalHarmonicsProvider : public ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider {
           public:
            enum {
              mid_onDate_5db0dfc8bd8b9574,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RawSphericalHarmonicsProvider(jobject obj) : ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RawSphericalHarmonicsProvider(const RawSphericalHarmonicsProvider& obj) : ::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider(obj) {}

            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics onDate(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(RawSphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(RawSphericalHarmonicsProvider);

          class t_RawSphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            RawSphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const RawSphericalHarmonicsProvider&);
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
