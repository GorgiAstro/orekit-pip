#ifndef org_hipparchus_util_JulierUnscentedTransform_H
#define org_hipparchus_util_JulierUnscentedTransform_H

#include "org/hipparchus/util/AbstractUnscentedTransform.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class JulierUnscentedTransform : public ::org::hipparchus::util::AbstractUnscentedTransform {
       public:
        enum {
          mid_init$_8fd427ab23829bf5,
          mid_init$_4320462275d66e78,
          mid_getWc_92d7e8d8d3f1dfcf,
          mid_getWm_92d7e8d8d3f1dfcf,
          mid_getMultiplicationFactor_9981f74b2d109da6,
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
