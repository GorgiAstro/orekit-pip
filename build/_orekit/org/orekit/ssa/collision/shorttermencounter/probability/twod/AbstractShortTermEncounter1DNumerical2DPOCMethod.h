#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_AbstractShortTermEncounter1DNumerical2DPOCMethod_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_AbstractShortTermEncounter1DNumerical2DPOCMethod_H

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class Cdm;
          }
        }
      }
    }
    namespace ssa {
      namespace metrics {
        class FieldProbabilityOfCollision;
        class ProbabilityOfCollision;
      }
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              class FieldShortTermEncounter2DDefinition;
              class ShortTermEncounter2DDefinition;
            }
          }
        }
      }
    }
    namespace propagation {
      class FieldStateCovariance;
      class StateCovariance;
    }
    namespace orbits {
      class Orbit;
      class FieldOrbit;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        class FieldUnivariateIntegrator;
        class UnivariateIntegrator;
      }
    }
    class CalculusFieldElement;
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              class AbstractShortTermEncounter1DNumerical2DPOCMethod : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod {
               public:
                enum {
                  mid_compute_14f91c678f061a03,
                  mid_compute_f877168372b32c50,
                  mid_compute_ddf22cd33bfe153c,
                  mid_compute_8d09da96ce925a0b,
                  mid_compute_3d70d87c0479b567,
                  mid_compute_b7a68961992b1c2b,
                  mid_compute_4b0f59ff7b8720f9,
                  mid_compute_376cdf1ab01ad011,
                  mid_compute_022642671171e46b,
                  mid_compute_d8ac2a1aa9301861,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AbstractShortTermEncounter1DNumerical2DPOCMethod(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AbstractShortTermEncounter1DNumerical2DPOCMethod(const AbstractShortTermEncounter1DNumerical2DPOCMethod& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {}

                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition &, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator &, jint, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition &, const ::org::hipparchus::analysis::integration::UnivariateIntegrator &, jint, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator &, jint, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, jdouble, jdouble, const ::org::hipparchus::analysis::integration::UnivariateIntegrator &, jint, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator &, jint) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::hipparchus::analysis::integration::UnivariateIntegrator &, jint) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator &, jint, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, const ::org::hipparchus::analysis::integration::UnivariateIntegrator &, jint, jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(AbstractShortTermEncounter1DNumerical2DPOCMethod);
              extern PyTypeObject *PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod);

              class t_AbstractShortTermEncounter1DNumerical2DPOCMethod {
              public:
                PyObject_HEAD
                AbstractShortTermEncounter1DNumerical2DPOCMethod object;
                static PyObject *wrap_Object(const AbstractShortTermEncounter1DNumerical2DPOCMethod&);
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
