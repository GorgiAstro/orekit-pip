#ifndef org_hipparchus_special_elliptic_jacobi_FieldCopolarC_H
#define org_hipparchus_special_elliptic_jacobi_FieldCopolarC_H

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

          class FieldCopolarC : public ::java::lang::Object {
           public:
            enum {
              mid_dc_613c8f46c659f636,
              mid_nc_613c8f46c659f636,
              mid_sc_613c8f46c659f636,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldCopolarC(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldCopolarC(const FieldCopolarC& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::CalculusFieldElement dc() const;
            ::org::hipparchus::CalculusFieldElement nc() const;
            ::org::hipparchus::CalculusFieldElement sc() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldCopolarC);
          extern PyTypeObject *PY_TYPE(FieldCopolarC);

          class t_FieldCopolarC {
          public:
            PyObject_HEAD
            FieldCopolarC object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldCopolarC *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldCopolarC&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldCopolarC&, PyTypeObject *);
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
