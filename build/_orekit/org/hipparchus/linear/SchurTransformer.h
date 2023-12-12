#ifndef org_hipparchus_linear_SchurTransformer_H
#define org_hipparchus_linear_SchurTransformer_H

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

      class SchurTransformer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f3731847577f13e6,
          mid_init$_08eaf415db10314f,
          mid_getP_70a207fcbc031df2,
          mid_getPT_70a207fcbc031df2,
          mid_getT_70a207fcbc031df2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SchurTransformer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SchurTransformer(const SchurTransformer& obj) : ::java::lang::Object(obj) {}

        SchurTransformer(const ::org::hipparchus::linear::RealMatrix &);
        SchurTransformer(const ::org::hipparchus::linear::RealMatrix &, jdouble);

        ::org::hipparchus::linear::RealMatrix getP() const;
        ::org::hipparchus::linear::RealMatrix getPT() const;
        ::org::hipparchus::linear::RealMatrix getT() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SchurTransformer);
      extern PyTypeObject *PY_TYPE(SchurTransformer);

      class t_SchurTransformer {
      public:
        PyObject_HEAD
        SchurTransformer object;
        static PyObject *wrap_Object(const SchurTransformer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
