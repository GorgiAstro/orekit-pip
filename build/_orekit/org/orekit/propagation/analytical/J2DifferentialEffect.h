#ifndef org_orekit_propagation_analytical_J2DifferentialEffect_H
#define org_orekit_propagation_analytical_J2DifferentialEffect_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        class AdapterPropagator$DifferentialEffect;
      }
      class SpacecraftState;
    }
    namespace orbits {
      class Orbit;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
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
    namespace propagation {
      namespace analytical {

        class J2DifferentialEffect : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e48861ead2e64add,
            mid_init$_c9e3ce9731fe3047,
            mid_init$_2c773257f1f84283,
            mid_init$_90d5c8781f3c6810,
            mid_apply_17366d6f28f0e9a3,
            mid_apply_c3c52b1257139045,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit J2DifferentialEffect(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          J2DifferentialEffect(const J2DifferentialEffect& obj) : ::java::lang::Object(obj) {}

          J2DifferentialEffect(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::Orbit &, jboolean, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect &, jboolean, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
          J2DifferentialEffect(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::Orbit &, jboolean, jdouble, jdouble, jdouble);
          J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect &, jboolean, jdouble, jdouble, jdouble);

          ::org::orekit::orbits::Orbit apply(const ::org::orekit::orbits::Orbit &) const;
          ::org::orekit::propagation::SpacecraftState apply(const ::org::orekit::propagation::SpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(J2DifferentialEffect);
        extern PyTypeObject *PY_TYPE(J2DifferentialEffect);

        class t_J2DifferentialEffect {
        public:
          PyObject_HEAD
          J2DifferentialEffect object;
          static PyObject *wrap_Object(const J2DifferentialEffect&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
