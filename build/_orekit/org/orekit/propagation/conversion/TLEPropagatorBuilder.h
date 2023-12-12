#ifndef org_orekit_propagation_conversion_TLEPropagatorBuilder_H
#define org_orekit_propagation_conversion_TLEPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class TLEPropagatorBuilder;
      }
      namespace analytical {
        namespace tle {
          class TLEPropagator;
          class TLE;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
    }
    namespace estimation {
      namespace leastsquares {
        class ModelObserver;
        class AbstractBatchLSModel;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
    }
    namespace data {
      class DataContext;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class TLEPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_4719a996de68c182,
            mid_init$_1dff286f8dcbaaee,
            mid_buildLeastSquaresModel_4fca41eef9d750a6,
            mid_buildPropagator_c186d77d7194bb8c,
            mid_copy_9adeea3e8a1b28d1,
            mid_getTemplateTLE_67f978062a0fd0e7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TLEPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TLEPropagatorBuilder(const TLEPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm &);
          TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::data::DataContext &, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm &);

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::analytical::tle::TLEPropagator buildPropagator(const JArray< jdouble > &) const;
          TLEPropagatorBuilder copy() const;
          ::org::orekit::propagation::analytical::tle::TLE getTemplateTLE() const;
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
        extern PyType_Def PY_TYPE_DEF(TLEPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(TLEPropagatorBuilder);

        class t_TLEPropagatorBuilder {
        public:
          PyObject_HEAD
          TLEPropagatorBuilder object;
          static PyObject *wrap_Object(const TLEPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
