#ifndef org_hipparchus_util_JulierUnscentedTransform_H
#define org_hipparchus_util_JulierUnscentedTransform_H

#include "org/hipparchus/util/AbstractUnscentedTransform.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
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
    namespace util {

      class JulierUnscentedTransform : public ::org::hipparchus::util::AbstractUnscentedTransform {
       public:
        enum {
          mid_init$_a3da1a935cb37f7b,
          mid_init$_89aad365fb0ed8da,
          mid_getWc_75d50d73180655b4,
          mid_getWm_75d50d73180655b4,
          mid_getMultiplicationFactor_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit JulierUnscentedTransform(jobject obj) : ::org::hipparchus::util::AbstractUnscentedTransform(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        JulierUnscentedTransform(const JulierUnscentedTransform& obj) : ::org::hipparchus::util::AbstractUnscentedTransform(obj) {}

        static jdouble DEFAULT_KAPPA;

        JulierUnscentedTransform(jint);
        JulierUnscentedTransform(jint, jdouble);

        ::org::hipparchus::linear::RealVector getWc() const;
        ::org::hipparchus::linear::RealVector getWm() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(JulierUnscentedTransform);
      extern PyTypeObject *PY_TYPE(JulierUnscentedTransform);

      class t_JulierUnscentedTransform {
      public:
        PyObject_HEAD
        JulierUnscentedTransform object;
        static PyObject *wrap_Object(const JulierUnscentedTransform&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
