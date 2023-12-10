#ifndef org_hipparchus_util_FieldContinuedFraction_H
#define org_hipparchus_util_FieldContinuedFraction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
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

      class FieldContinuedFraction : public ::java::lang::Object {
       public:
        enum {
          mid_evaluate_a4b1871f4d29e58b,
          mid_evaluate_40cfe74535da4622,
          mid_evaluate_7fc015d41da5fb84,
          mid_evaluate_76ee700af6f4010d,
          mid_getA_e2b464e41c9ba627,
          mid_getB_e2b464e41c9ba627,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldContinuedFraction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldContinuedFraction(const FieldContinuedFraction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::CalculusFieldElement evaluate(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::hipparchus::CalculusFieldElement evaluate(const ::org::hipparchus::CalculusFieldElement &, jdouble) const;
        ::org::hipparchus::CalculusFieldElement evaluate(const ::org::hipparchus::CalculusFieldElement &, jint) const;
        ::org::hipparchus::CalculusFieldElement evaluate(const ::org::hipparchus::CalculusFieldElement &, jdouble, jint) const;
        ::org::hipparchus::CalculusFieldElement getA(jint, const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::hipparchus::CalculusFieldElement getB(jint, const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(FieldContinuedFraction);
      extern PyTypeObject *PY_TYPE(FieldContinuedFraction);

      class t_FieldContinuedFraction {
      public:
        PyObject_HEAD
        FieldContinuedFraction object;
        static PyObject *wrap_Object(const FieldContinuedFraction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
