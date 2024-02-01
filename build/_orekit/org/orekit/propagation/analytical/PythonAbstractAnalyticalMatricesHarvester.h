#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalMatricesHarvester_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalMatricesHarvester_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        class AbstractAnalyticalGradientConverter;
        class AbstractAnalyticalPropagator;
      }
    }
    namespace utils {
      class DoubleArrayDictionary;
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
            mid_init$_d249f4485255ccbf,
            mid_finalize_ff7cb6c242604316,
            mid_getGradientConverter_d2718eefd4d5ae94,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
