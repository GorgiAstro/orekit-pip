#ifndef org_hipparchus_analysis_integration_MidPointIntegrator_H
#define org_hipparchus_analysis_integration_MidPointIntegrator_H

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

        class MidPointIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator {
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

          explicit MidPointIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MidPointIntegrator(const MidPointIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(obj) {}

          static jint MIDPOINT_MAX_ITERATIONS_COUNT;

          MidPointIntegrator();
          MidPointIntegrator(jint, jint);
          MidPointIntegrator(jdouble, jdouble, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(MidPointIntegrator);
        extern PyTypeObject *PY_TYPE(MidPointIntegrator);

        class t_MidPointIntegrator {
        public:
          PyObject_HEAD
          MidPointIntegrator object;
          static PyObject *wrap_Object(const MidPointIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
