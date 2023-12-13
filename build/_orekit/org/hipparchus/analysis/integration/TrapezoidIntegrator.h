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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_3313c75e3e16c428,
            mid_init$_5408957787adf55f,
            mid_doIntegrate_b74f83833fdad017,
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
