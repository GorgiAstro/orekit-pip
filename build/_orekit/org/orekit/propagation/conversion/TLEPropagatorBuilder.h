#ifndef org_orekit_propagation_conversion_TLEPropagatorBuilder_H
#define org_orekit_propagation_conversion_TLEPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace data {
      class DataContext;
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
          class TLEPropagator;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
      namespace conversion {
        class TLEPropagatorBuilder;
        class PropagatorBuilder;
      }
    }
    namespace orbits {
      class PositionAngleType;
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
            mid_init$_cb396584af19332c,
            mid_init$_c9527380c71353fc,
            mid_buildLeastSquaresModel_1a4dd1f247347a8f,
            mid_buildPropagator_def703a4cd204ea8,
            mid_copy_f0f088b56f464362,
            mid_getTemplateTLE_1c01e307dcced049,
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
