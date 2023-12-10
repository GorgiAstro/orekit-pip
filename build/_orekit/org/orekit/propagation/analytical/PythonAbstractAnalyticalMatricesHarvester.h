#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalMatricesHarvester_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalMatricesHarvester_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"

namespace org {
  namespace orekit {
    namespace utils {
      class DoubleArrayDictionary;
    }
    namespace propagation {
      namespace analytical {
        class AbstractAnalyticalPropagator;
        class AbstractAnalyticalGradientConverter;
      }
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class PythonAbstractAnalyticalMatricesHarvester : public ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester {
         public:
          enum {
            mid_init$_b9debeff808dacbc,
            mid_finalize_7ae3461a92a43152,
            mid_getGradientConverter_5e2b3cffafaa419c,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractAnalyticalMatricesHarvester(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractAnalyticalMatricesHarvester(const PythonAbstractAnalyticalMatricesHarvester& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester(obj) {}

          PythonAbstractAnalyticalMatricesHarvester(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator &, const ::java::lang::String &, const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::utils::DoubleArrayDictionary &);

          void finalize() const;
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter getGradientConverter() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractAnalyticalMatricesHarvester);
        extern PyTypeObject *PY_TYPE(PythonAbstractAnalyticalMatricesHarvester);

        class t_PythonAbstractAnalyticalMatricesHarvester {
        public:
          PyObject_HEAD
          PythonAbstractAnalyticalMatricesHarvester object;
          static PyObject *wrap_Object(const PythonAbstractAnalyticalMatricesHarvester&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
