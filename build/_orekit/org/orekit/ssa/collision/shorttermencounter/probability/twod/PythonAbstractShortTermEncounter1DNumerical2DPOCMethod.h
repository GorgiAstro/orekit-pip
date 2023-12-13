#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_H

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"

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
      namespace metrics {
        class ProbabilityOfCollision;
        class FieldProbabilityOfCollision;
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      namespace integration {
        class FieldUnivariateIntegrator;
        class UnivariateIntegrator;
      }
    }
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

              class PythonAbstractShortTermEncounter1DNumerical2DPOCMethod : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod {
               public:
                enum {
                  mid_init$_770382c82804b0fb,
                  mid_compute_f84396b6984702e2,
                  mid_compute_978e207e20e445e6,
                  mid_finalize_a1fa5dae97ea5ed2,
                  mid_getType_8397a286d982b383,
                  mid_pythonDecRef_a1fa5dae97ea5ed2,
                  mid_pythonExtension_6c0ce7e438e5ded4,
                  mid_pythonExtension_3d7dd2314a0dd456,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(const PythonAbstractShortTermEncounter1DNumerical2DPOCMethod& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(obj) {}

                PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(const ::java::lang::String &, const ::org::hipparchus::analysis::integration::UnivariateIntegrator &, jint);

                ::org::orekit::ssa::metrics::ProbabilityOfCollision compute(jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::hipparchus::analysis::integration::UnivariateIntegrator &, jint) const;
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision compute(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator &, jint) const;
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
              extern PyType_Def PY_TYPE_DEF(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod);
              extern PyTypeObject *PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod);

              class t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod {
              public:
                PyObject_HEAD
                PythonAbstractShortTermEncounter1DNumerical2DPOCMethod object;
                static PyObject *wrap_Object(const PythonAbstractShortTermEncounter1DNumerical2DPOCMethod&);
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
