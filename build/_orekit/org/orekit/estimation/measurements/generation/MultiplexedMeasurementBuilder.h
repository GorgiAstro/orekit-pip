#ifndef org_orekit_estimation_measurements_generation_MultiplexedMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_MultiplexedMeasurementBuilder_H

#include "java/lang/Object.h"

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
    class List;
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

          class MultiplexedMeasurementBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_65de9727799c5641,
              mid_addModifier_fc816f44bfa3d437,
              mid_build_4d6c52b99d90c222,
              mid_getModifiers_a6156df500549a58,
              mid_getSatellites_ff20f279f9ba9f9e,
              mid_init_d958a9bfde45c759,
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
