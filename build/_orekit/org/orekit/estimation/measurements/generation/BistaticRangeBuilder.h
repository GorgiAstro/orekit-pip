#ifndef org_orekit_estimation_measurements_generation_BistaticRangeBuilder_H
#define org_orekit_estimation_measurements_generation_BistaticRangeBuilder_H

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
        class BistaticRange;
        class GroundStation;
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

          class BistaticRangeBuilder : public ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder {
           public:
            enum {
              mid_init$_10af0e412dc0df53,
              mid_build_326e0e89569609c7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BistaticRangeBuilder(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BistaticRangeBuilder(const BistaticRangeBuilder& obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {}

            BistaticRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::estimation::measurements::GroundStation &, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

            ::org::orekit::estimation::measurements::BistaticRange build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
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
          extern PyType_Def PY_TYPE_DEF(BistaticRangeBuilder);
          extern PyTypeObject *PY_TYPE(BistaticRangeBuilder);

          class t_BistaticRangeBuilder {
          public:
            PyObject_HEAD
            BistaticRangeBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BistaticRangeBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BistaticRangeBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BistaticRangeBuilder&, PyTypeObject *);
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
