#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalGradientConverter_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalGradientConverter_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        class AbstractAnalyticalPropagator;
        class FieldAbstractAnalyticalPropagator;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class PythonAbstractAnalyticalGradientConverter : public ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter {
         public:
          enum {
            mid_init$_296566653f57b5ed,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_getPropagator_50636e1e84d390e7,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
