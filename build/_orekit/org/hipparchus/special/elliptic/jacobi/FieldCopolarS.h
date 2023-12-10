#ifndef org_hipparchus_special_elliptic_jacobi_FieldCopolarS_H
#define org_hipparchus_special_elliptic_jacobi_FieldCopolarS_H

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

          class FieldCopolarS : public ::java::lang::Object {
           public:
            enum {
              mid_cs_e6d4d3215c30992a,
              mid_ds_e6d4d3215c30992a,
              mid_ns_e6d4d3215c30992a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldCopolarS(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldCopolarS(const FieldCopolarS& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::CalculusFieldElement cs() const;
            ::org::hipparchus::CalculusFieldElement ds() const;
            ::org::hipparchus::CalculusFieldElement ns() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldCopolarS);
          extern PyTypeObject *PY_TYPE(FieldCopolarS);

          class t_FieldCopolarS {
          public:
            PyObject_HEAD
            FieldCopolarS object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldCopolarS *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldCopolarS&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldCopolarS&, PyTypeObject *);
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
