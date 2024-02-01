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
            mid_init$_aaed259e1b5f1153,
            mid_init$_48ca1125d4856a74,
            mid_init$_afba34ea3008b8dd,
            mid_doIntegrate_9981f74b2d109da6,
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
