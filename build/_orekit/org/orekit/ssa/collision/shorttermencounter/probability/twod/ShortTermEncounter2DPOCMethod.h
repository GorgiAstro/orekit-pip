#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DPOCMethod_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DPOCMethod_H

#include "java/lang/Object.h"

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
              class ShortTermEncounter2DPOCMethodType;
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

              class ShortTermEncounter2DPOCMethod : public ::java::lang::Object {
               public:
                enum {
                  mid_compute_52ac86180af0fc38,
                  mid_compute_a8ad2b5fdf7c89e9,
                  mid_compute_7917f8d0fe4dcee2,
                  mid_compute_fe2c8257e3a1171e,
                  mid_compute_5bd7443246955087,
                  mid_compute_d4afe7edfd93d28b,
                  mid_compute_62e67021055b4b34,
                  mid_compute_54a027380ebb9f4f,
                  mid_compute_d7ca5925933c6d49,
                  mid_compute_b1728d2759e16f6b,
                  mid_compute_5478b75e08765b46,
                  mid_compute_ddf22cd33bfe153c,
                  mid_compute_8d09da96ce925a0b,
                  mid_compute_51013759c7807d3e,
                  mid_compute_ca5c6c5a7bbee06f,
                  mid_compute_38f8ce8ca31e24a9,
                  mid_compute_0fff86b0133b54f7,
                  mid_getName_3cffd47377eca18a,
                  mid_getType_4b8bf2bb84f7480e,
                  mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ShortTermEncounter2DPOCMethod(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ShortTermEncounter2DPOCMethod(const ShortTermEncounter2DPOCMethod& obj) : ::java::lang::Object(obj) {}

                static jdouble DEFAULT_ZERO_THRESHOLD;

                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition &) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition &) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition &, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition &, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, const ::org::hipparchus::CalculusFieldElement &, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, jdouble) const;
                ::java::lang::String getName() const;
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType getType() const;
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
              extern PyType_Def PY_TYPE_DEF(ShortTermEncounter2DPOCMethod);
              extern PyTypeObject *PY_TYPE(ShortTermEncounter2DPOCMethod);

              class t_ShortTermEncounter2DPOCMethod {
              public:
                PyObject_HEAD
                ShortTermEncounter2DPOCMethod object;
                static PyObject *wrap_Object(const ShortTermEncounter2DPOCMethod&);
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
