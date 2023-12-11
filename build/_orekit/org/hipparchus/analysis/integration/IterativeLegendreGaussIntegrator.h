#ifndef org_hipparchus_analysis_integration_IterativeLegendreGaussIntegrator_H
#define org_hipparchus_analysis_integration_IterativeLegendreGaussIntegrator_H

#include "org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        class IterativeLegendreGaussIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator {
         public:
          enum {
            mid_init$_79cfe3f564275380,
            mid_init$_3796b665437eba81,
            mid_init$_9a6afb5be949e9a1,
            mid_doIntegrate_557b8123390d8d0c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IterativeLegendreGaussIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IterativeLegendreGaussIntegrator(const IterativeLegendreGaussIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(obj) {}

          IterativeLegendreGaussIntegrator(jint, jdouble, jdouble);
          IterativeLegendreGaussIntegrator(jint, jint, jint);
          IterativeLegendreGaussIntegrator(jint, jdouble, jdouble, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(IterativeLegendreGaussIntegrator);
        extern PyTypeObject *PY_TYPE(IterativeLegendreGaussIntegrator);

        class t_IterativeLegendreGaussIntegrator {
        public:
          PyObject_HEAD
          IterativeLegendreGaussIntegrator object;
          static PyObject *wrap_Object(const IterativeLegendreGaussIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
