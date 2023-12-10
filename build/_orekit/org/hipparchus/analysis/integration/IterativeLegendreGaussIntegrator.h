#ifndef org_hipparchus_analysis_integration_IterativeLegendreGaussIntegrator_H
#define org_hipparchus_analysis_integration_IterativeLegendreGaussIntegrator_H

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

        class IterativeLegendreGaussIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator {
         public:
          enum {
            mid_init$_07bf81310115068c,
            mid_init$_8336200ef3dde36b,
            mid_init$_361130b948656372,
            mid_doIntegrate_dff5885c2c873297,
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
