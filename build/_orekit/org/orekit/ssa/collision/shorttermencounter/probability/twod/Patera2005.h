#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_Patera2005_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_Patera2005_H

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"

namespace org {
  namespace orekit {
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
            }
          }
        }
      }
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

              class Patera2005 : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_init$_7f47577937f891c6,
                  mid_compute_a89d7889c8c6100d,
                  mid_compute_91f4c05bf9eab1a6,
                  mid_getType_592990a91429410c,
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
