#ifndef org_orekit_propagation_numerical_GLONASSNumericalPropagatorBuilder_H
#define org_orekit_propagation_numerical_GLONASSNumericalPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace propagation {
      namespace numerical {
        class GLONASSNumericalPropagator;
        class GLONASSNumericalPropagatorBuilder;
      }
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_b497ba6a57c1bea6,
            mid_init$_5ac92562e210e61f,
            mid_attitudeProvider_c29034d29782ca95,
            mid_build_38606dad37802ca8,
            mid_eci_5967e5ad557b9333,
            mid_mass_fd7ec11afcb405eb,
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
