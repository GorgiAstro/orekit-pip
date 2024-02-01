#ifndef org_hipparchus_analysis_integration_IterativeLegendreFieldGaussIntegrator_H
#define org_hipparchus_analysis_integration_IterativeLegendreFieldGaussIntegrator_H

#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"

namespace org {
  namespace hipparchus {
    class Field;
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

        class IterativeLegendreFieldGaussIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator {
         public:
          enum {
            mid_init$_a0aa104363595b82,
            mid_init$_e2ca6bcdfe4e6004,
            mid_init$_97cb888a329f1394,
            mid_doIntegrate_08d37e3f77b7239d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IterativeLegendreFieldGaussIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IterativeLegendreFieldGaussIntegrator(const IterativeLegendreFieldGaussIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {}

          IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field &, jint, jdouble, jdouble);
          IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field &, jint, jint, jint);
          IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field &, jint, jdouble, jdouble, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(IterativeLegendreFieldGaussIntegrator);
        extern PyTypeObject *PY_TYPE(IterativeLegendreFieldGaussIntegrator);

        class t_IterativeLegendreFieldGaussIntegrator {
        public:
          PyObject_HEAD
          IterativeLegendreFieldGaussIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_IterativeLegendreFieldGaussIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IterativeLegendreFieldGaussIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IterativeLegendreFieldGaussIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
