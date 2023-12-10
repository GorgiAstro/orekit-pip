#ifndef org_hipparchus_special_elliptic_jacobi_FieldCopolarD_H
#define org_hipparchus_special_elliptic_jacobi_FieldCopolarD_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          class FieldCopolarD : public ::java::lang::Object {
           public:
            enum {
              mid_cd_eba8e72a22c984ac,
              mid_nd_eba8e72a22c984ac,
              mid_sd_eba8e72a22c984ac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldCopolarD(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldCopolarD(const FieldCopolarD& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::CalculusFieldElement cd() const;
            ::org::hipparchus::CalculusFieldElement nd() const;
            ::org::hipparchus::CalculusFieldElement sd() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldCopolarD);
          extern PyTypeObject *PY_TYPE(FieldCopolarD);

          class t_FieldCopolarD {
          public:
            PyObject_HEAD
            FieldCopolarD object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldCopolarD *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldCopolarD&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldCopolarD&, PyTypeObject *);
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
