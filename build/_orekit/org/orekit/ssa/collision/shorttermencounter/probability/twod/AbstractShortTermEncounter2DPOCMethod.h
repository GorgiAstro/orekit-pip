#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_AbstractShortTermEncounter2DPOCMethod_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_AbstractShortTermEncounter2DPOCMethod_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldStateCovariance;
      class StateCovariance;
    }
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              class ShortTermEncounter2DDefinition;
              class ShortTermEncounter2DPOCMethod;
              class FieldShortTermEncounter2DDefinition;
            }
          }
        }
      }
      namespace metrics {
        class FieldProbabilityOfCollision;
        class ProbabilityOfCollision;
      }
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class Cdm;
          }
        }
      }
    }
    namespace orbits {
      class FieldOrbit;
      class Orbit;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              class AbstractShortTermEncounter2DPOCMethod : public ::java::lang::Object {
               public:
                enum {
                  mid_compute_387945137ebab778,
                  mid_compute_0110eb01e8b95b31,
                  mid_compute_d71c9b0a2a1fa7ea,
                  mid_compute_fabda52a93cfd27a,
                  mid_compute_7eae8d8112e983e4,
                  mid_compute_8edb355cf7d54cf6,
                  mid_compute_95dcab374babccc7,
                  mid_compute_426d335df18e2f21,
                  mid_getName_d2c8eb4129821f0e,
                  mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136,
                  mid_getObjectOrbitFromCdm_49f4e9a7f009669a,
                  mid_getObjectStateCovarianceFromCdm_9e411e3026392eb1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AbstractShortTermEncounter2DPOCMethod(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AbstractShortTermEncounter2DPOCMethod(const AbstractShortTermEncounter2DPOCMethod& obj) : ::java::lang::Object(obj) {}

                static jdouble DEFAULT_TCA_DIFFERENCE_TOLERANCE;

                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition &, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition &, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, const ::org::hipparchus::CalculusFieldElement &, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, jdouble) const;
                ::java::lang::String getName() const;
                jboolean isAMaximumProbabilityOfCollisionMethod() const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              extern PyType_Def PY_TYPE_DEF(AbstractShortTermEncounter2DPOCMethod);
              extern PyTypeObject *PY_TYPE(AbstractShortTermEncounter2DPOCMethod);

              class t_AbstractShortTermEncounter2DPOCMethod {
              public:
                PyObject_HEAD
                AbstractShortTermEncounter2DPOCMethod object;
                static PyObject *wrap_Object(const AbstractShortTermEncounter2DPOCMethod&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
