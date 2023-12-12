#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_Laas2015_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_Laas2015_H

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

              class Laas2015 : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_init$_47602ef8408ea361,
                  mid_compute_ddf22cd33bfe153c,
                  mid_compute_8d09da96ce925a0b,
                  mid_getType_4b8bf2bb84f7480e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Laas2015(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Laas2015(const Laas2015& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {}

                static jdouble DEFAULT_SCALING_THRESHOLD;

                Laas2015();
                Laas2015(jdouble, jint);

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
              extern PyType_Def PY_TYPE_DEF(Laas2015);
              extern PyTypeObject *PY_TYPE(Laas2015);

              class t_Laas2015 {
              public:
                PyObject_HEAD
                Laas2015 object;
                static PyObject *wrap_Object(const Laas2015&);
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
