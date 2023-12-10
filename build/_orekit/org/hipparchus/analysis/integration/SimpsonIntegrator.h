#ifndef org_hipparchus_analysis_integration_SimpsonIntegrator_H
#define org_hipparchus_analysis_integration_SimpsonIntegrator_H

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

        class SimpsonIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_6f37635c3285dbdf,
            mid_init$_1b5e9254fb70ca20,
            mid_doIntegrate_dff5885c2c873297,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpsonIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpsonIntegrator(const SimpsonIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(obj) {}

          static jint SIMPSON_MAX_ITERATIONS_COUNT;

          SimpsonIntegrator();
          SimpsonIntegrator(jint, jint);
          SimpsonIntegrator(jdouble, jdouble, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(SimpsonIntegrator);
        extern PyTypeObject *PY_TYPE(SimpsonIntegrator);

        class t_SimpsonIntegrator {
        public:
          PyObject_HEAD
          SimpsonIntegrator object;
          static PyObject *wrap_Object(const SimpsonIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
