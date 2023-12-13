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
        class EstimationModifier;
        class MultiplexedMeasurement;
        class ObservableSatellite;
        namespace generation {
          class MeasurementBuilder;
        }
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          class MultiplexedMeasurementBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0e7c3032c7c93ed3,
              mid_addModifier_cb38ed914ba48f20,
              mid_build_2029b055d5cf26b6,
              mid_getModifiers_e62d3bb06d56d7e3,
              mid_getSatellites_eb47c48e4fca882c,
              mid_init_f89af00fc113b524,
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
