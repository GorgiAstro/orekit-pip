#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_Patera2005_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_Patera2005_H

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      namespace integration {
        class FieldUnivariateIntegrator;
        class UnivariateIntegrator;
      }
    }
  }
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
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

              class Patera2005 : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod {
               public:
                enum {
                  mid_init$_0fa09c18fee449d5,
                  mid_init$_4ee143e57030d3b8,
                  mid_compute_194bff03a32ceae7,
                  mid_compute_acd6f33dacb379ff,
                  mid_getType_5d7ecb27bb5e3bc3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Patera2005(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Patera2005(const Patera2005& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(obj) {}

                Patera2005();
                Patera2005(const ::org::hipparchus::analysis::integration::UnivariateIntegrator &, jint);

                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::hipparchus::analysis::integration::UnivariateIntegrator &, jint) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator &, jint) const;
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType getType() const;
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
              extern PyType_Def PY_TYPE_DEF(Patera2005);
              extern PyTypeObject *PY_TYPE(Patera2005);

              class t_Patera2005 {
              public:
                PyObject_HEAD
                Patera2005 object;
                static PyObject *wrap_Object(const Patera2005&);
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
