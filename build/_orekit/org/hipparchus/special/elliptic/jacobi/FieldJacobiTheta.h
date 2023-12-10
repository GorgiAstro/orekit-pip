#ifndef org_hipparchus_special_elliptic_jacobi_FieldJacobiTheta_H
#define org_hipparchus_special_elliptic_jacobi_FieldJacobiTheta_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class FieldTheta;
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
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          class FieldJacobiTheta : public ::java::lang::Object {
           public:
            enum {
              mid_init$_072c8635f2164db9,
              mid_getQ_eba8e72a22c984ac,
              mid_values_2f1d8d2235142141,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldJacobiTheta(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldJacobiTheta(const FieldJacobiTheta& obj) : ::java::lang::Object(obj) {}

            FieldJacobiTheta(const ::org::hipparchus::CalculusFieldElement &);

            ::org::hipparchus::CalculusFieldElement getQ() const;
            ::org::hipparchus::special::elliptic::jacobi::FieldTheta values(const ::org::hipparchus::CalculusFieldElement &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldJacobiTheta);
          extern PyTypeObject *PY_TYPE(FieldJacobiTheta);

          class t_FieldJacobiTheta {
          public:
            PyObject_HEAD
            FieldJacobiTheta object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldJacobiTheta *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldJacobiTheta&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldJacobiTheta&, PyTypeObject *);
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
