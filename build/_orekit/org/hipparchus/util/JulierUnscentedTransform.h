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
          mid_init$_44ed599e93e8a30c,
          mid_init$_d5322b8b512aeb26,
          mid_getWc_3a10cc75bd070d84,
          mid_getWm_3a10cc75bd070d84,
          mid_getMultiplicationFactor_b74f83833fdad017,
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
