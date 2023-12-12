#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_AbstractAlfriend1999_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_AbstractAlfriend1999_H

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {
        class ProbabilityOfCollision;
        class FieldProbabilityOfCollision;
      }
    }
  }
  namespace hipparchus {
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

              class AbstractAlfriend1999 : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod {
               public:
                enum {
                  mid_compute_ddf22cd33bfe153c,
                  mid_compute_8d09da96ce925a0b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AbstractAlfriend1999(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AbstractAlfriend1999(const AbstractAlfriend1999& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {}

                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
              extern PyType_Def PY_TYPE_DEF(AbstractAlfriend1999);
              extern PyTypeObject *PY_TYPE(AbstractAlfriend1999);

              class t_AbstractAlfriend1999 {
              public:
                PyObject_HEAD
                AbstractAlfriend1999 object;
                static PyObject *wrap_Object(const AbstractAlfriend1999&);
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
