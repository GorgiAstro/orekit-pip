#ifndef org_hipparchus_analysis_function_HarmonicOscillator_H
#define org_hipparchus_analysis_function_HarmonicOscillator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class Derivative;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
    namespace analysis {
      namespace function {

        class HarmonicOscillator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d0d6094fbd7015c5,
            mid_value_0ba5fed9597b693e,
            mid_value_1f22c1881e72229d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HarmonicOscillator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HarmonicOscillator(const HarmonicOscillator& obj) : ::java::lang::Object(obj) {}

          HarmonicOscillator(jdouble, jdouble, jdouble);

          jdouble value(jdouble) const;
          ::org::hipparchus::analysis::differentiation::Derivative value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        extern PyType_Def PY_TYPE_DEF(HarmonicOscillator);
        extern PyTypeObject *PY_TYPE(HarmonicOscillator);

        class t_HarmonicOscillator {
        public:
          PyObject_HEAD
          HarmonicOscillator object;
          static PyObject *wrap_Object(const HarmonicOscillator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
