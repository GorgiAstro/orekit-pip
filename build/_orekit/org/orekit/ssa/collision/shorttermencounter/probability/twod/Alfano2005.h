#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_Alfano2005_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_Alfano2005_H

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"

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

              class Alfano2005 : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_compute_ddf22cd33bfe153c,
                  mid_compute_8d09da96ce925a0b,
                  mid_getType_4b8bf2bb84f7480e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Alfano2005(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Alfano2005(const Alfano2005& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {}

                Alfano2005();

                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
              extern PyType_Def PY_TYPE_DEF(Alfano2005);
              extern PyTypeObject *PY_TYPE(Alfano2005);

              class t_Alfano2005 {
              public:
                PyObject_HEAD
                Alfano2005 object;
                static PyObject *wrap_Object(const Alfano2005&);
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
