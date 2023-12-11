#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonShortTermEncounter2DPOCMethod_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonShortTermEncounter2DPOCMethod_H

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
              class ShortTermEncounter2DPOCMethod;
              class ShortTermEncounter2DDefinition;
            }
          }
        }
      }
    }
    namespace orbits {
      class Orbit;
      class FieldOrbit;
    }
    namespace propagation {
      class FieldStateCovariance;
      class StateCovariance;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Throwable;
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

              class PythonShortTermEncounter2DPOCMethod : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_compute_7917f8d0fe4dcee2,
                  mid_compute_5bd7443246955087,
                  mid_compute_d4afe7edfd93d28b,
                  mid_compute_54a027380ebb9f4f,
                  mid_compute_ddf22cd33bfe153c,
                  mid_compute_8d09da96ce925a0b,
                  mid_compute_51013759c7807d3e,
                  mid_compute_0fff86b0133b54f7,
                  mid_finalize_0640e6acf969ed28,
                  mid_getName_3cffd47377eca18a,
                  mid_getType_4b8bf2bb84f7480e,
                  mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1,
                  mid_pythonDecRef_0640e6acf969ed28,
                  mid_pythonExtension_9e26256fb0d384a2,
                  mid_pythonExtension_3cd6a6b354c6aa22,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PythonShortTermEncounter2DPOCMethod(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PythonShortTermEncounter2DPOCMethod(const PythonShortTermEncounter2DPOCMethod& obj) : ::java::lang::Object(obj) {}

                PythonShortTermEncounter2DPOCMethod();

                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition &, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition &, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm &, const ::org::hipparchus::CalculusFieldElement &, jdouble) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, jdouble) const;
                void finalize() const;
                ::java::lang::String getName() const;
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType getType() const;
                jboolean isAMaximumProbabilityOfCollisionMethod() const;
                void pythonDecRef() const;
                jlong pythonExtension() const;
                void pythonExtension(jlong) const;
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
              extern PyType_Def PY_TYPE_DEF(PythonShortTermEncounter2DPOCMethod);
              extern PyTypeObject *PY_TYPE(PythonShortTermEncounter2DPOCMethod);

              class t_PythonShortTermEncounter2DPOCMethod {
              public:
                PyObject_HEAD
                PythonShortTermEncounter2DPOCMethod object;
                static PyObject *wrap_Object(const PythonShortTermEncounter2DPOCMethod&);
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
