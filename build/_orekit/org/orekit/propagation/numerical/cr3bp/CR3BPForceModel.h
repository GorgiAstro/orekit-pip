#ifndef org_orekit_propagation_numerical_cr3bp_CR3BPForceModel_H
#define org_orekit_propagation_numerical_cr3bp_CR3BPForceModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class DerivativeStructure;
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace bodies {
      class CR3BPSystem;
    }
    namespace forces {
      class ForceModel;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
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
              mid_init$_d97bf5b01aa2ae7b,
              mid_acceleration_5e147f44c28a35c9,
              mid_acceleration_9816b8f76e94356a,
              mid_dependsOnPositionOnly_eee3de00fe971136,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getPotential_e2c0ea69b49ff127,
              mid_getPotential_25833e647d701f52,
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
