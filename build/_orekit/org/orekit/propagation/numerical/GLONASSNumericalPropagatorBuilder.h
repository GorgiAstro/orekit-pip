#ifndef org_orekit_propagation_numerical_GLONASSNumericalPropagatorBuilder_H
#define org_orekit_propagation_numerical_GLONASSNumericalPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace data {
      class DataContext;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
      namespace numerical {
        class GLONASSNumericalPropagatorBuilder;
        class GLONASSNumericalPropagator;
      }
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class ClassicalRungeKuttaIntegrator;
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
      namespace numerical {

        class GLONASSNumericalPropagatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_75da73f0971cc4a6,
            mid_init$_e9757e5aff4f1f6e,
            mid_attitudeProvider_29c6ffdc65243d6c,
            mid_build_4bd4f7fe02baade0,
            mid_eci_852109cd40e9a8a0,
            mid_mass_c4720e5a35c44b17,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GLONASSNumericalPropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GLONASSNumericalPropagatorBuilder(const GLONASSNumericalPropagatorBuilder& obj) : ::java::lang::Object(obj) {}

          GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator &, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements &, jboolean);
          GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator &, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements &, jboolean, const ::org::orekit::data::DataContext &);

          GLONASSNumericalPropagatorBuilder attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
          ::org::orekit::propagation::numerical::GLONASSNumericalPropagator build() const;
          GLONASSNumericalPropagatorBuilder eci(const ::org::orekit::frames::Frame &) const;
          GLONASSNumericalPropagatorBuilder mass(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        extern PyType_Def PY_TYPE_DEF(GLONASSNumericalPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(GLONASSNumericalPropagatorBuilder);

        class t_GLONASSNumericalPropagatorBuilder {
        public:
          PyObject_HEAD
          GLONASSNumericalPropagatorBuilder object;
          static PyObject *wrap_Object(const GLONASSNumericalPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
