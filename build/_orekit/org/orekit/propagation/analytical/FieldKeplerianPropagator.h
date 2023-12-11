#ifndef org_orekit_propagation_analytical_FieldKeplerianPropagator_H
#define org_orekit_propagation_analytical_FieldKeplerianPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class FieldOrbit;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
            mid_init$_8c98afebb6212490,
            mid_init$_676b80212ae6696e,
            mid_init$_802495dc0272e4b1,
            mid_init$_9653f31e5e184049,
            mid_init$_b79477cdea32e877,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_resetInitialState_b66c84a5711243d5,
            mid_propagateOrbit_ec5b52b8a8c77d72,
            mid_resetIntermediateState_585702d5a402c590,
            mid_getMass_b884068a2c99f6ca,
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
