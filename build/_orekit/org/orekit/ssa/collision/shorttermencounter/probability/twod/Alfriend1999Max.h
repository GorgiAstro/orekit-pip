#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_Alfriend1999Max_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_Alfriend1999Max_H

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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

              class Alfriend1999Max : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999 {
               public:
                enum {
                  mid_init$_0fa09c18fee449d5,
                  mid_computeValue_8c19bdea212fe058,
                  mid_computeValue_ff4594b9dc2244a3,
                  mid_getType_5d7ecb27bb5e3bc3,
                  mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Alfriend1999Max(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Alfriend1999Max(const Alfriend1999Max& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(obj) {}

                Alfriend1999Max();

                jdouble computeValue(jdouble, jdouble, jdouble) const;
                ::org::hipparchus::CalculusFieldElement computeValue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
              extern PyType_Def PY_TYPE_DEF(Alfriend1999Max);
              extern PyTypeObject *PY_TYPE(Alfriend1999Max);

              class t_Alfriend1999Max {
              public:
                PyObject_HEAD
                Alfriend1999Max object;
                static PyObject *wrap_Object(const Alfriend1999Max&);
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
