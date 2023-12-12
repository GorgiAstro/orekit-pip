#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalGradientConverter_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalGradientConverter_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
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
            mid_init$_4de0bd046bd8fbcf,
            mid_finalize_0640e6acf969ed28,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_getPropagator_733af95624ce3e55,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
