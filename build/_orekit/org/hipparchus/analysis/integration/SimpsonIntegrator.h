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
            mid_init$_7ae3461a92a43152,
            mid_init$_8dbc1129a3c2557a,
            mid_init$_b5a15021085cabdb,
            mid_doIntegrate_456d9a2f64d6b28d,
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
