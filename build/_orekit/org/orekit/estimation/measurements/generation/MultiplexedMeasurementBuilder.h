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
        namespace generation {
          class MeasurementBuilder;
        }
        class EstimationModifier;
        class ObservableSatellite;
        class MultiplexedMeasurement;
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
              mid_init$_de3e021e7266b71e,
              mid_addModifier_baf3397e6fffc21d,
              mid_build_bc5f2657d91c9ded,
              mid_getModifiers_2afa36052df4765d,
              mid_getSatellites_f81b672126a6576d,
              mid_init_a9e71d848b81c8f8,
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
