#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonAbstractAlfriend1999_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_PythonAbstractAlfriend1999_H

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

              class PythonAbstractAlfriend1999 : public ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999 {
               public:
                enum {
                  mid_init$_d0bc48d5b00dc40c,
                  mid_computeValue_8c19bdea212fe058,
                  mid_computeValue_ff4594b9dc2244a3,
                  mid_finalize_0fa09c18fee449d5,
                  mid_getType_5d7ecb27bb5e3bc3,
                  mid_pythonDecRef_0fa09c18fee449d5,
                  mid_pythonExtension_492808a339bfa35f,
                  mid_pythonExtension_3a8e7649f31fdb20,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PythonAbstractAlfriend1999(jobject obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PythonAbstractAlfriend1999(const PythonAbstractAlfriend1999& obj) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(obj) {}

                PythonAbstractAlfriend1999(const ::java::lang::String &);

                jdouble computeValue(jdouble, jdouble, jdouble) const;
                ::org::hipparchus::CalculusFieldElement computeValue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
              extern PyType_Def PY_TYPE_DEF(PythonAbstractAlfriend1999);
              extern PyTypeObject *PY_TYPE(PythonAbstractAlfriend1999);

              class t_PythonAbstractAlfriend1999 {
              public:
                PyObject_HEAD
                PythonAbstractAlfriend1999 object;
                static PyObject *wrap_Object(const PythonAbstractAlfriend1999&);
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
