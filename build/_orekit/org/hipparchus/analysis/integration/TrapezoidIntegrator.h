#ifndef org_hipparchus_analysis_integration_TrapezoidIntegrator_H
#define org_hipparchus_analysis_integration_TrapezoidIntegrator_H

#include "org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator.h"

namespace org {
  namespace hipparchus {
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
      namespace integration {

        class TrapezoidIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_b5d23e6c0858e8ed,
            mid_init$_eb6adaa8ce308c89,
            mid_doIntegrate_9981f74b2d109da6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TrapezoidIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TrapezoidIntegrator(const TrapezoidIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(obj) {}

          static jint TRAPEZOID_MAX_ITERATIONS_COUNT;

          TrapezoidIntegrator();
          TrapezoidIntegrator(jint, jint);
          TrapezoidIntegrator(jdouble, jdouble, jint, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(TrapezoidIntegrator);
        extern PyTypeObject *PY_TYPE(TrapezoidIntegrator);

        class t_TrapezoidIntegrator {
        public:
          PyObject_HEAD
          TrapezoidIntegrator object;
          static PyObject *wrap_Object(const TrapezoidIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
