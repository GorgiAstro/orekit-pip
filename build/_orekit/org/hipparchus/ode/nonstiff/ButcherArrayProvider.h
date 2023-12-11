#ifndef org_hipparchus_ode_nonstiff_ButcherArrayProvider_H
#define org_hipparchus_ode_nonstiff_ButcherArrayProvider_H

#include "java/lang/Object.h"

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

        class ButcherArrayProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getA_8cf5267aa13a77f3,
            mid_getB_a53a7513ecedada2,
            mid_getC_a53a7513ecedada2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ButcherArrayProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ButcherArrayProvider(const ButcherArrayProvider& obj) : ::java::lang::Object(obj) {}

          JArray< JArray< jdouble > > getA() const;
          JArray< jdouble > getB() const;
          JArray< jdouble > getC() const;
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
        extern PyType_Def PY_TYPE_DEF(ButcherArrayProvider);
        extern PyTypeObject *PY_TYPE(ButcherArrayProvider);

        class t_ButcherArrayProvider {
        public:
          PyObject_HEAD
          ButcherArrayProvider object;
          static PyObject *wrap_Object(const ButcherArrayProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
