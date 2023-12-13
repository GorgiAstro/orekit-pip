#ifndef org_orekit_propagation_analytical_FieldKeplerianPropagator_H
#define org_orekit_propagation_analytical_FieldKeplerianPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
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
            mid_init$_01b80e5fc8224f27,
            mid_init$_49f6b8e8e63ddd72,
            mid_init$_8572d3ed7c8f364c,
            mid_init$_4954ffbdfe632147,
            mid_init$_a1d700082199d0a3,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_resetInitialState_54d9efbf99822980,
            mid_getMass_140b8964300ddedf,
            mid_resetIntermediateState_871885b409df9d57,
            mid_propagateOrbit_f34a7a94e111b112,
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
