#ifndef org_orekit_propagation_semianalytical_dsst_utilities_hansen_FieldHansenThirdBodyLinear_H
#define org_orekit_propagation_semianalytical_dsst_utilities_hansen_FieldHansenThirdBodyLinear_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              class FieldHansenThirdBodyLinear : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_4b0ddad3195faf0c,
                  mid_computeInitValues_82fa7e789a6ae1f6,
                  mid_getDerivative_e2b464e41c9ba627,
                  mid_getValue_e2b464e41c9ba627,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldHansenThirdBodyLinear(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldHansenThirdBodyLinear(const FieldHansenThirdBodyLinear& obj) : ::java::lang::Object(obj) {}

                FieldHansenThirdBodyLinear(jint, jint, const ::org::hipparchus::Field &);

                void computeInitValues(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::hipparchus::CalculusFieldElement getDerivative(jint, const ::org::hipparchus::CalculusFieldElement &) const;
                ::org::hipparchus::CalculusFieldElement getValue(jint, const ::org::hipparchus::CalculusFieldElement &) const;
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              extern PyType_Def PY_TYPE_DEF(FieldHansenThirdBodyLinear);
              extern PyTypeObject *PY_TYPE(FieldHansenThirdBodyLinear);

              class t_FieldHansenThirdBodyLinear {
              public:
                PyObject_HEAD
                FieldHansenThirdBodyLinear object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_FieldHansenThirdBodyLinear *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const FieldHansenThirdBodyLinear&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const FieldHansenThirdBodyLinear&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
