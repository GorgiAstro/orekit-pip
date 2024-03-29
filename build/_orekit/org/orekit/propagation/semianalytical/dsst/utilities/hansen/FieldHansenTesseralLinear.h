#ifndef org_orekit_propagation_semianalytical_dsst_utilities_hansen_FieldHansenTesseralLinear_H
#define org_orekit_propagation_semianalytical_dsst_utilities_hansen_FieldHansenTesseralLinear_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              class FieldHansenTesseralLinear : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3621dda6d262ea2c,
                  mid_computeInitValues_f9ea60a8dc2d69fb,
                  mid_getDerivative_b23de0cfc61f8f60,
                  mid_getValue_b23de0cfc61f8f60,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldHansenTesseralLinear(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldHansenTesseralLinear(const FieldHansenTesseralLinear& obj) : ::java::lang::Object(obj) {}

                FieldHansenTesseralLinear(jint, jint, jint, jint, jint, const ::org::hipparchus::Field &);

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
              extern PyType_Def PY_TYPE_DEF(FieldHansenTesseralLinear);
              extern PyTypeObject *PY_TYPE(FieldHansenTesseralLinear);

              class t_FieldHansenTesseralLinear {
              public:
                PyObject_HEAD
                FieldHansenTesseralLinear object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_FieldHansenTesseralLinear *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const FieldHansenTesseralLinear&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const FieldHansenTesseralLinear&, PyTypeObject *);
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
