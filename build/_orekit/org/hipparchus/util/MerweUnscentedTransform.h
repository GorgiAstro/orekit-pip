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
          mid_init$_44ed599e93e8a30c,
          mid_init$_390258812740a16c,
          mid_getWc_3a10cc75bd070d84,
          mid_getWm_3a10cc75bd070d84,
          mid_getMultiplicationFactor_b74f83833fdad017,
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
