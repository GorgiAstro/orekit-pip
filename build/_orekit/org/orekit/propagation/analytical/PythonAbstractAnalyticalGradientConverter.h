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
            mid_init$_a3a64c0d17b70ee3,
            mid_finalize_7ae3461a92a43152,
            mid_getParametersDrivers_a6156df500549a58,
            mid_getPropagator_6bbe2f82089c1fee,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
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
