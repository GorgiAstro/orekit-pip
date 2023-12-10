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
          mid_evaluate_d3398190482814dc,
          mid_evaluate_e6afc264a8ab5469,
          mid_evaluate_fe52a10392d0b9c8,
          mid_evaluate_f287dd1a2b476f59,
          mid_getA_ee7db4b2ec7048ce,
          mid_getB_ee7db4b2ec7048ce,
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
