#ifndef org_hipparchus_linear_HessenbergTransformer_H
#define org_hipparchus_linear_HessenbergTransformer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class HessenbergTransformer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_84bd15e0995d0c79,
          mid_getH_f77d745f2128c391,
          mid_getP_f77d745f2128c391,
          mid_getPT_f77d745f2128c391,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit HessenbergTransformer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HessenbergTransformer(const HessenbergTransformer& obj) : ::java::lang::Object(obj) {}

        HessenbergTransformer(const ::org::hipparchus::linear::RealMatrix &);

        ::org::hipparchus::linear::RealMatrix getH() const;
        ::org::hipparchus::linear::RealMatrix getP() const;
        ::org::hipparchus::linear::RealMatrix getPT() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(HessenbergTransformer);
      extern PyTypeObject *PY_TYPE(HessenbergTransformer);

      class t_HessenbergTransformer {
      public:
        PyObject_HEAD
        HessenbergTransformer object;
        static PyObject *wrap_Object(const HessenbergTransformer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
