#ifndef org_hipparchus_ode_nonstiff_FieldButcherArrayProvider_H
#define org_hipparchus_ode_nonstiff_FieldButcherArrayProvider_H

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
    namespace ode {
      namespace nonstiff {

        class FieldButcherArrayProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getA_34ce7b2f6a50059b,
            mid_getB_883be608cfc68c26,
            mid_getC_883be608cfc68c26,
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
