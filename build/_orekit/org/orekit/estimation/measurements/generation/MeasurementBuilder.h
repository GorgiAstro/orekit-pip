#ifndef org_orekit_estimation_measurements_generation_MeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_MeasurementBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class EstimationModifier;
        class ObservedMeasurement;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          class MeasurementBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_addModifier_a3bed5360bec47d0,
              mid_build_9dac2855d37640dd,
              mid_getModifiers_d751c1a57012b438,
              mid_getSatellites_27bb228995072af3,
              mid_init_ce7d94fe97fdcf55,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MeasurementBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MeasurementBuilder(const MeasurementBuilder& obj) : ::java::lang::Object(obj) {}

            void addModifier(const ::org::orekit::estimation::measurements::EstimationModifier &) const;
            ::org::orekit::estimation::measurements::ObservedMeasurement build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
            ::java::util::List getModifiers() const;
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > getSatellites() const;
            void init(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(MeasurementBuilder);
          extern PyTypeObject *PY_TYPE(MeasurementBuilder);

          class t_MeasurementBuilder {
          public:
            PyObject_HEAD
            MeasurementBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_MeasurementBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const MeasurementBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const MeasurementBuilder&, PyTypeObject *);
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
