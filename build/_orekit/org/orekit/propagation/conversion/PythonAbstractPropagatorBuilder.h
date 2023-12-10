#ifndef org_orekit_propagation_conversion_PythonAbstractPropagatorBuilder_H
#define org_orekit_propagation_conversion_PythonAbstractPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      class Propagator;
    }
    namespace estimation {
      namespace leastsquares {
        class AbstractBatchLSModel;
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriversList;
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
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PythonAbstractPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_1af1d7ef33c5abdd,
            mid_buildLeastSquaresModel_2eb3122719704f90,
            mid_buildPropagator_0c183831cad84280,
            mid_copy_7c39c5f4719b16a0,
            mid_finalize_0fa09c18fee449d5,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractPropagatorBuilder(const PythonAbstractPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          PythonAbstractPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::PositionAngleType &, jdouble, jboolean);

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::Propagator buildPropagator(const JArray< jdouble > &) const;
          ::org::orekit::propagation::conversion::PropagatorBuilder copy() const;
          void finalize() const;
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
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(PythonAbstractPropagatorBuilder);

        class t_PythonAbstractPropagatorBuilder {
        public:
          PyObject_HEAD
          PythonAbstractPropagatorBuilder object;
          static PyObject *wrap_Object(const PythonAbstractPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
