#ifndef org_hipparchus_util_AbstractUnscentedTransform_H
#define org_hipparchus_util_AbstractUnscentedTransform_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
    namespace util {
      class UnscentedTransformProvider;
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

      class AbstractUnscentedTransform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a3da1a935cb37f7b,
          mid_unscentedTransform_4b6e483760a5840b,
          mid_getMultiplicationFactor_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractUnscentedTransform(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractUnscentedTransform(const AbstractUnscentedTransform& obj) : ::java::lang::Object(obj) {}

        AbstractUnscentedTransform(jint);

        JArray< ::org::hipparchus::linear::RealVector > unscentedTransform(const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(AbstractUnscentedTransform);
      extern PyTypeObject *PY_TYPE(AbstractUnscentedTransform);

      class t_AbstractUnscentedTransform {
      public:
        PyObject_HEAD
        AbstractUnscentedTransform object;
        static PyObject *wrap_Object(const AbstractUnscentedTransform&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
