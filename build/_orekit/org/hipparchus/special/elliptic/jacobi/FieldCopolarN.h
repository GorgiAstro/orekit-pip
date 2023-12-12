#ifndef org_hipparchus_special_elliptic_jacobi_FieldCopolarN_H
#define org_hipparchus_special_elliptic_jacobi_FieldCopolarN_H

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

          class FieldCopolarN : public ::java::lang::Object {
           public:
            enum {
              mid_cn_613c8f46c659f636,
              mid_dn_613c8f46c659f636,
              mid_sn_613c8f46c659f636,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldCopolarN(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldCopolarN(const FieldCopolarN& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::CalculusFieldElement cn() const;
            ::org::hipparchus::CalculusFieldElement dn() const;
            ::org::hipparchus::CalculusFieldElement sn() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldCopolarN);
          extern PyTypeObject *PY_TYPE(FieldCopolarN);

          class t_FieldCopolarN {
          public:
            PyObject_HEAD
            FieldCopolarN object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldCopolarN *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldCopolarN&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldCopolarN&, PyTypeObject *);
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
