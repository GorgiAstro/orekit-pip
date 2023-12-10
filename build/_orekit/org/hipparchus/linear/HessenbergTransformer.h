#ifndef org_hipparchus_linear_HessenbergTransformer_H
#define org_hipparchus_linear_HessenbergTransformer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
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
    namespace linear {

      class HessenbergTransformer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c67473bd6cfaa69b,
          mid_getH_688b496048ff947b,
          mid_getP_688b496048ff947b,
          mid_getPT_688b496048ff947b,
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
