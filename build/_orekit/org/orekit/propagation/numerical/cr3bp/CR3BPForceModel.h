#ifndef org_orekit_propagation_numerical_cr3bp_CR3BPForceModel_H
#define org_orekit_propagation_numerical_cr3bp_CR3BPForceModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class DerivativeStructure;
      }
    }
  }
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace bodies {
      class CR3BPSystem;
    }
    namespace forces {
      class ForceModel;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          class CR3BPForceModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b154ccffb790db99,
              mid_acceleration_00aba28d3abe9a8c,
              mid_acceleration_78989e44b99f7cc2,
              mid_dependsOnPositionOnly_e470b6d9e0d979db,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getPotential_549f1eabc50f0937,
              mid_getPotential_82cfe09454b40a26,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CR3BPForceModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CR3BPForceModel(const CR3BPForceModel& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *MASS_RATIO_SUFFIX;

            CR3BPForceModel(const ::org::orekit::bodies::CR3BPSystem &);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jboolean dependsOnPositionOnly() const;
            ::java::util::List getParametersDrivers() const;
            ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure getPotential(const ::org::orekit::propagation::FieldSpacecraftState &) const;
            ::org::hipparchus::analysis::differentiation::DerivativeStructure getPotential(const ::org::orekit::propagation::SpacecraftState &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {
          extern PyType_Def PY_TYPE_DEF(CR3BPForceModel);
          extern PyTypeObject *PY_TYPE(CR3BPForceModel);

          class t_CR3BPForceModel {
          public:
            PyObject_HEAD
            CR3BPForceModel object;
            static PyObject *wrap_Object(const CR3BPForceModel&);
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
