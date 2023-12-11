#ifndef org_hipparchus_ode_nonstiff_FieldButcherArrayProvider_H
#define org_hipparchus_ode_nonstiff_FieldButcherArrayProvider_H

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
    namespace ode {
      namespace nonstiff {

        class FieldButcherArrayProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getA_f180d140dce78d62,
            mid_getB_41762fd4377ff26e,
            mid_getC_41762fd4377ff26e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldButcherArrayProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldButcherArrayProvider(const FieldButcherArrayProvider& obj) : ::java::lang::Object(obj) {}

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > getA() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getB() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getC() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        extern PyType_Def PY_TYPE_DEF(FieldButcherArrayProvider);
        extern PyTypeObject *PY_TYPE(FieldButcherArrayProvider);

        class t_FieldButcherArrayProvider {
        public:
          PyObject_HEAD
          FieldButcherArrayProvider object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldButcherArrayProvider *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldButcherArrayProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldButcherArrayProvider&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
