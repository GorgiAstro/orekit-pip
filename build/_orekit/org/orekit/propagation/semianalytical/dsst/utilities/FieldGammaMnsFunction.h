#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldGammaMnsFunction_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldGammaMnsFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class FieldGammaMnsFunction : public ::java::lang::Object {
             public:
              enum {
                mid_init$_351c8a208f94d0d9,
                mid_getDerivative_1e72c6fa8f42834d,
                mid_getValue_1e72c6fa8f42834d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldGammaMnsFunction(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldGammaMnsFunction(const FieldGammaMnsFunction& obj) : ::java::lang::Object(obj) {}

              FieldGammaMnsFunction(jint, const ::org::hipparchus::CalculusFieldElement &, jint, const ::org::hipparchus::Field &);

              ::org::hipparchus::CalculusFieldElement getDerivative(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getValue(jint, jint, jint) const;
            };
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
            extern PyType_Def PY_TYPE_DEF(FieldGammaMnsFunction);
            extern PyTypeObject *PY_TYPE(FieldGammaMnsFunction);

            class t_FieldGammaMnsFunction {
            public:
              PyObject_HEAD
              FieldGammaMnsFunction object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldGammaMnsFunction *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldGammaMnsFunction&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldGammaMnsFunction&, PyTypeObject *);
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

#endif
