#ifndef org_hipparchus_util_MerweUnscentedTransform_H
#define org_hipparchus_util_MerweUnscentedTransform_H

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

      class MerweUnscentedTransform : public ::org::hipparchus::util::AbstractUnscentedTransform {
       public:
        enum {
          mid_init$_99803b0791f320ff,
          mid_init$_2e15f46ce2042002,
          mid_getWc_aab4fbf77867daa8,
          mid_getWm_aab4fbf77867daa8,
          mid_getMultiplicationFactor_dff5885c2c873297,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MerweUnscentedTransform(jobject obj) : ::org::hipparchus::util::AbstractUnscentedTransform(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MerweUnscentedTransform(const MerweUnscentedTransform& obj) : ::org::hipparchus::util::AbstractUnscentedTransform(obj) {}

        static jdouble DEFAULT_ALPHA;
        static jdouble DEFAULT_BETA;
        static jdouble DEFAULT_KAPPA;

        MerweUnscentedTransform(jint);
        MerweUnscentedTransform(jint, jdouble, jdouble, jdouble);

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
      extern PyType_Def PY_TYPE_DEF(MerweUnscentedTransform);
      extern PyTypeObject *PY_TYPE(MerweUnscentedTransform);

      class t_MerweUnscentedTransform {
      public:
        PyObject_HEAD
        MerweUnscentedTransform object;
        static PyObject *wrap_Object(const MerweUnscentedTransform&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
