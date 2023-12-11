#ifndef org_orekit_estimation_measurements_generation_MultiplexedMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_MultiplexedMeasurementBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
    }
    namespace estimation {
      namespace measurements {
        class MultiplexedMeasurement;
        namespace generation {
          class MeasurementBuilder;
        }
        class ObservableSatellite;
        class EstimationModifier;
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
              mid_init$_4ccaedadb068bdeb,
              mid_addModifier_6f472135bf397672,
              mid_build_6fd4734691683ef8,
              mid_getModifiers_0d9551367f7ecdef,
              mid_getSatellites_b8c09fefa9db3b83,
              mid_init_d5db9a5f2035671b,
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
