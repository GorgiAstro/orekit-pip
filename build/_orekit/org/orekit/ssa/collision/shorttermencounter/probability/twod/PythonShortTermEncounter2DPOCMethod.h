#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonShortTermEncounter2DPOCMethod_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonShortTermEncounter2DPOCMethod_H

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
              class ShortTermEncounter2DPOCMethodType;
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
                  mid_init$_ff7cb6c242604316,
                  mid_compute_387945137ebab778,
                  mid_compute_0110eb01e8b95b31,
                  mid_compute_d71c9b0a2a1fa7ea,
                  mid_compute_fabda52a93cfd27a,
                  mid_compute_7eae8d8112e983e4,
                  mid_compute_8edb355cf7d54cf6,
                  mid_compute_95dcab374babccc7,
                  mid_compute_426d335df18e2f21,
                  mid_finalize_ff7cb6c242604316,
                  mid_getName_d2c8eb4129821f0e,
                  mid_getType_592990a91429410c,
                  mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136,
                  mid_pythonDecRef_ff7cb6c242604316,
                  mid_pythonExtension_42c72b98e3c2e08a,
                  mid_pythonExtension_f5bbab7e97879358,
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
