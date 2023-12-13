#ifndef org_orekit_estimation_measurements_generation_OneWayGNSSRangeBuilder_H
#define org_orekit_estimation_measurements_generation_OneWayGNSSRangeBuilder_H

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
        namespace gnss {
          class OneWayGNSSRange;
        }
        class ObservableSatellite;
      }
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
    }
    namespace time {
      class AbsoluteDate;
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

          class OneWayGNSSRangeBuilder : public ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder {
           public:
            enum {
              mid_build_d111b18a662471b4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OneWayGNSSRangeBuilder(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OneWayGNSSRangeBuilder(const OneWayGNSSRangeBuilder& obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {}

            ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
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
          extern PyType_Def PY_TYPE_DEF(OneWayGNSSRangeBuilder);
          extern PyTypeObject *PY_TYPE(OneWayGNSSRangeBuilder);

          class t_OneWayGNSSRangeBuilder {
          public:
            PyObject_HEAD
            OneWayGNSSRangeBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_OneWayGNSSRangeBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const OneWayGNSSRangeBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const OneWayGNSSRangeBuilder&, PyTypeObject *);
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
