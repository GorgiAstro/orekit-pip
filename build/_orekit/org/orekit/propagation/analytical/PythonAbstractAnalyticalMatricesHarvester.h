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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class PythonAbstractAnalyticalMatricesHarvester : public ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester {
         public:
          enum {
            mid_init$_eddc569406c6c254,
            mid_finalize_0fa09c18fee449d5,
            mid_getGradientConverter_1bd2b3ae52af5114,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
