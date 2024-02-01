#ifndef org_hipparchus_util_MerweUnscentedTransform_H
#define org_hipparchus_util_MerweUnscentedTransform_H

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

      class MerweUnscentedTransform : public ::org::hipparchus::util::AbstractUnscentedTransform {
       public:
        enum {
          mid_init$_8fd427ab23829bf5,
          mid_init$_2baad0ec229f7c27,
          mid_getWc_92d7e8d8d3f1dfcf,
          mid_getWm_92d7e8d8d3f1dfcf,
          mid_getMultiplicationFactor_9981f74b2d109da6,
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
