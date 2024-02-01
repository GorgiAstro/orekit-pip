#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_Alfriend1999_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_Alfriend1999_H

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999.h"

namespace org {
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

              class Alfriend1999 : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999 {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getType_592990a91429410c,
                  mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Alfriend1999(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Alfriend1999(const Alfriend1999& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(obj) {}

                Alfriend1999();

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
              extern PyType_Def PY_TYPE_DEF(Alfriend1999);
              extern PyTypeObject *PY_TYPE(Alfriend1999);

              class t_Alfriend1999 {
              public:
                PyObject_HEAD
                Alfriend1999 object;
                static PyObject *wrap_Object(const Alfriend1999&);
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
