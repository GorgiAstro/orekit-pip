#ifndef org_orekit_propagation_numerical_GLONASSNumericalPropagatorBuilder_H
#define org_orekit_propagation_numerical_GLONASSNumericalPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace data {
      class DataContext;
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
            mid_init$_c4f5084529b2630a,
            mid_init$_fe060e7d2340011c,
            mid_attitudeProvider_b8e20793d178ef3e,
            mid_build_66895542a8da4316,
            mid_eci_d85d69f2cf281f4c,
            mid_mass_1e4b091bb86c38aa,
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
