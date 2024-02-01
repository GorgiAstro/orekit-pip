#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalGradientConverter_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalGradientConverter_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        class FieldAbstractAnalyticalPropagator;
        class AbstractAnalyticalPropagator;
      }
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class PythonAbstractAnalyticalGradientConverter : public ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter {
         public:
          enum {
            mid_init$_1966ec07e9760ef3,
            mid_finalize_ff7cb6c242604316,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_getPropagator_4f7a484ba5bae905,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractAnalyticalGradientConverter(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractAnalyticalGradientConverter(const PythonAbstractAnalyticalGradientConverter& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(obj) {}

          PythonAbstractAnalyticalGradientConverter(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator &, jdouble, jint);

          void finalize() const;
          ::java::util::List getParametersDrivers() const;
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator getPropagator(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAbstractAnalyticalGradientConverter);
        extern PyTypeObject *PY_TYPE(PythonAbstractAnalyticalGradientConverter);

        class t_PythonAbstractAnalyticalGradientConverter {
        public:
          PyObject_HEAD
          PythonAbstractAnalyticalGradientConverter object;
          static PyObject *wrap_Object(const PythonAbstractAnalyticalGradientConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
