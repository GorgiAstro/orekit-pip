#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalMatricesHarvester_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalMatricesHarvester_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        class AbstractAnalyticalPropagator;
        class AbstractAnalyticalGradientConverter;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class PythonAbstractAnalyticalMatricesHarvester : public ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester {
         public:
          enum {
            mid_init$_785d8bc651853d9a,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getGradientConverter_3c9b6f24c90a46d6,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
