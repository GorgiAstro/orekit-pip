#ifndef org_orekit_estimation_measurements_generation_MultiplexedMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_MultiplexedMeasurementBuilder_H

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
        namespace generation {
          class MeasurementBuilder;
        }
        class MultiplexedMeasurement;
        class EstimationModifier;
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

          class MultiplexedMeasurementBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_aa335fea495d60e0,
              mid_addModifier_a3bed5360bec47d0,
              mid_build_5a81322b29df9729,
              mid_getModifiers_d751c1a57012b438,
              mid_getSatellites_27bb228995072af3,
              mid_init_ce7d94fe97fdcf55,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiplexedMeasurementBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiplexedMeasurementBuilder(const MultiplexedMeasurementBuilder& obj) : ::java::lang::Object(obj) {}

            MultiplexedMeasurementBuilder(const ::java::util::List &);

            void addModifier(const ::org::orekit::estimation::measurements::EstimationModifier &) const;
            ::org::orekit::estimation::measurements::MultiplexedMeasurement build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
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
          extern PyType_Def PY_TYPE_DEF(MultiplexedMeasurementBuilder);
          extern PyTypeObject *PY_TYPE(MultiplexedMeasurementBuilder);

          class t_MultiplexedMeasurementBuilder {
          public:
            PyObject_HEAD
            MultiplexedMeasurementBuilder object;
            static PyObject *wrap_Object(const MultiplexedMeasurementBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
