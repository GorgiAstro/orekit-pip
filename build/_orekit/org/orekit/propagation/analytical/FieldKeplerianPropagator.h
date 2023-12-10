#ifndef org_orekit_propagation_analytical_FieldKeplerianPropagator_H
#define org_orekit_propagation_analytical_FieldKeplerianPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class FieldKeplerianPropagator : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_b6fb4d19a77f9888,
            mid_init$_adb1719b0dda6ffc,
            mid_init$_6f95e48bb8bb1403,
            mid_init$_bb11f4dbd2f8fb4f,
            mid_init$_d8969be32793f087,
            mid_getParametersDrivers_a6156df500549a58,
            mid_resetInitialState_52154b94d63e10ed,
            mid_getMass_7bc0fd76ee915b72,
            mid_resetIntermediateState_c76342d42407aa3d,
            mid_propagateOrbit_edf76d94987be4ff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldKeplerianPropagator(jobject obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldKeplerianPropagator(const FieldKeplerianPropagator& obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {}

          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &);
          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &);
          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &);
          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &);
          FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

          ::java::util::List getParametersDrivers() const;
          void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldKeplerianPropagator);
        extern PyTypeObject *PY_TYPE(FieldKeplerianPropagator);

        class t_FieldKeplerianPropagator {
        public:
          PyObject_HEAD
          FieldKeplerianPropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldKeplerianPropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldKeplerianPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldKeplerianPropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
