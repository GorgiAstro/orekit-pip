#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonShortTermEncounter2DPOCMethod_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonShortTermEncounter2DPOCMethod_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
      class FieldStateCovariance;
    }
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              class ShortTermEncounter2DDefinition;
              class ShortTermEncounter2DPOCMethod;
              class FieldShortTermEncounter2DDefinition;
              class ShortTermEncounter2DPOCMethodType;
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
                  mid_init$_0fa09c18fee449d5,
                  mid_compute_7ed362902ba10174,
                  mid_compute_4d249761aa92e117,
                  mid_compute_091f0943f3979390,
                  mid_compute_44d723598fb6a077,
                  mid_compute_184c2f4ec5889c74,
                  mid_compute_0ed38e7bbee7fafc,
                  mid_compute_77dbe9f2fcda2496,
                  mid_compute_1c26d4a5b9c10569,
                  mid_finalize_0fa09c18fee449d5,
                  mid_getName_11b109bd155ca898,
                  mid_getType_5d7ecb27bb5e3bc3,
                  mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd,
                  mid_pythonDecRef_0fa09c18fee449d5,
                  mid_pythonExtension_492808a339bfa35f,
                  mid_pythonExtension_3a8e7649f31fdb20,
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
