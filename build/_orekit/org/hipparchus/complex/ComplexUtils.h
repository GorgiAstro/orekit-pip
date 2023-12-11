#ifndef org_hipparchus_complex_ComplexUtils_H
#define org_hipparchus_complex_ComplexUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace complex {
      class Complex;
      class FieldComplex;
    }
    class CalculusFieldElement;
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
    namespace complex {

      class ComplexUtils : public ::java::lang::Object {
       public:
        enum {
          mid_convertToComplex_430c39327f12a793,
          mid_polar2Complex_00e4ffdd403af412,
          mid_polar2Complex_e9dc5bca1487ec04,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexUtils(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexUtils(const ComplexUtils& obj) : ::java::lang::Object(obj) {}

        static JArray< ::org::hipparchus::complex::Complex > convertToComplex(const JArray< jdouble > &);
        static ::org::hipparchus::complex::Complex polar2Complex(jdouble, jdouble);
        static ::org::hipparchus::complex::FieldComplex polar2Complex(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(ComplexUtils);
      extern PyTypeObject *PY_TYPE(ComplexUtils);

      class t_ComplexUtils {
      public:
        PyObject_HEAD
        ComplexUtils object;
        static PyObject *wrap_Object(const ComplexUtils&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
