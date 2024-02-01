#ifndef org_orekit_estimation_measurements_generation_BistaticRangeRateBuilder_H
#define org_orekit_estimation_measurements_generation_BistaticRangeRateBuilder_H

#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class CorrelatedRandomVectorGenerator;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class GroundStation;
        class BistaticRangeRate;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          class BistaticRangeRateBuilder : public ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder {
           public:
            enum {
              mid_init$_10af0e412dc0df53,
              mid_build_becf7b739de9849e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BistaticRangeRateBuilder(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BistaticRangeRateBuilder(const BistaticRangeRateBuilder& obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {}

            BistaticRangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::estimation::measurements::GroundStation &, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

            ::org::orekit::estimation::measurements::BistaticRangeRate build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          extern PyType_Def PY_TYPE_DEF(BistaticRangeRateBuilder);
          extern PyTypeObject *PY_TYPE(BistaticRangeRateBuilder);

          class t_BistaticRangeRateBuilder {
          public:
            PyObject_HEAD
            BistaticRangeRateBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BistaticRangeRateBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BistaticRangeRateBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BistaticRangeRateBuilder&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
