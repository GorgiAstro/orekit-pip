#ifndef org_hipparchus_special_elliptic_jacobi_FieldTheta_H
#define org_hipparchus_special_elliptic_jacobi_FieldTheta_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          class FieldTheta : public ::java::lang::Object {
           public:
            enum {
              mid_theta1_613c8f46c659f636,
              mid_theta2_613c8f46c659f636,
              mid_theta3_613c8f46c659f636,
              mid_theta4_613c8f46c659f636,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTheta(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldTheta(const FieldTheta& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::CalculusFieldElement theta1() const;
            ::org::hipparchus::CalculusFieldElement theta2() const;
            ::org::hipparchus::CalculusFieldElement theta3() const;
            ::org::hipparchus::CalculusFieldElement theta4() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          extern PyType_Def PY_TYPE_DEF(FieldTheta);
          extern PyTypeObject *PY_TYPE(FieldTheta);

          class t_FieldTheta {
          public:
            PyObject_HEAD
            FieldTheta object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldTheta *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldTheta&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldTheta&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
