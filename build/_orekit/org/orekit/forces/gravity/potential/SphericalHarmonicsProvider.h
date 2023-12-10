#ifndef org_orekit_forces_gravity_potential_SphericalHarmonicsProvider_H
#define org_orekit_forces_gravity_potential_SphericalHarmonicsProvider_H

#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class SphericalHarmonicsProvider : public ::org::orekit::forces::gravity::potential::TideSystemProvider {
           public:
            enum {
              mid_getAe_456d9a2f64d6b28d,
              mid_getMaxDegree_f2f64475e4580546,
              mid_getMaxOrder_f2f64475e4580546,
              mid_getMu_456d9a2f64d6b28d,
              mid_getReferenceDate_aaa854c403487cf3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SphericalHarmonicsProvider(jobject obj) : ::org::orekit::forces::gravity::potential::TideSystemProvider(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SphericalHarmonicsProvider(const SphericalHarmonicsProvider& obj) : ::org::orekit::forces::gravity::potential::TideSystemProvider(obj) {}

            jdouble getAe() const;
            jint getMaxDegree() const;
            jint getMaxOrder() const;
            jdouble getMu() const;
            ::org::orekit::time::AbsoluteDate getReferenceDate() const;
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
          extern PyType_Def PY_TYPE_DEF(SphericalHarmonicsProvider);
          extern PyTypeObject *PY_TYPE(SphericalHarmonicsProvider);

          class t_SphericalHarmonicsProvider {
          public:
            PyObject_HEAD
            SphericalHarmonicsProvider object;
            static PyObject *wrap_Object(const SphericalHarmonicsProvider&);
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
