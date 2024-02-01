#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonAbstractShortTermEncounter2DPOCMethod_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonAbstractShortTermEncounter2DPOCMethod_H

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

              class PythonAbstractShortTermEncounter2DPOCMethod : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod {
               public:
                enum {
                  mid_init$_105e1eadb709d9ac,
                  mid_compute_7eae8d8112e983e4,
                  mid_compute_8edb355cf7d54cf6,
                  mid_finalize_ff7cb6c242604316,
                  mid_getType_592990a91429410c,
                  mid_pythonDecRef_ff7cb6c242604316,
                  mid_pythonExtension_42c72b98e3c2e08a,
                  mid_pythonExtension_f5bbab7e97879358,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PythonAbstractShortTermEncounter2DPOCMethod(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PythonAbstractShortTermEncounter2DPOCMethod(const PythonAbstractShortTermEncounter2DPOCMethod& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(obj) {}

                PythonAbstractShortTermEncounter2DPOCMethod(const ::java::lang::String &);

                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
                void finalize() const;
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType getType() const;
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
              extern PyType_Def PY_TYPE_DEF(PythonAbstractShortTermEncounter2DPOCMethod);
              extern PyTypeObject *PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod);

              class t_PythonAbstractShortTermEncounter2DPOCMethod {
              public:
                PyObject_HEAD
                PythonAbstractShortTermEncounter2DPOCMethod object;
                static PyObject *wrap_Object(const PythonAbstractShortTermEncounter2DPOCMethod&);
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
