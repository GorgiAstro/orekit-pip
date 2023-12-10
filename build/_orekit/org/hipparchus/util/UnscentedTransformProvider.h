#ifndef org_hipparchus_util_UnscentedTransformProvider_H
#define org_hipparchus_util_UnscentedTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
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

      class UnscentedTransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getWc_6d9adf1d5b463928,
          mid_getWm_6d9adf1d5b463928,
          mid_unscentedTransform_701a8550e98fcc7d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UnscentedTransformProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UnscentedTransformProvider(const UnscentedTransformProvider& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::linear::RealVector getWc() const;
        ::org::hipparchus::linear::RealVector getWm() const;
        JArray< ::org::hipparchus::linear::RealVector > unscentedTransform(const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(UnscentedTransformProvider);
      extern PyTypeObject *PY_TYPE(UnscentedTransformProvider);

      class t_UnscentedTransformProvider {
      public:
        PyObject_HEAD
        UnscentedTransformProvider object;
        static PyObject *wrap_Object(const UnscentedTransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif