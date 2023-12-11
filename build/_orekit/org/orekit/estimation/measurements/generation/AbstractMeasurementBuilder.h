#ifndef org_orekit_estimation_measurements_generation_AbstractMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_AbstractMeasurementBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
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

          class AbstractMeasurementBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_addModifier_6f472135bf397672,
              mid_getModifiers_0d9551367f7ecdef,
              mid_getSatellites_b8c09fefa9db3b83,
              mid_init_d5db9a5f2035671b,
              mid_getEnd_7a97f7e149e79afb,
              mid_getStart_7a97f7e149e79afb,
              mid_getTheoreticalStandardDeviation_a53a7513ecedada2,
              mid_getBaseWeight_a53a7513ecedada2,
              mid_getNoise_a53a7513ecedada2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractMeasurementBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractMeasurementBuilder(const AbstractMeasurementBuilder& obj) : ::java::lang::Object(obj) {}

            void addModifier(const ::org::orekit::estimation::measurements::EstimationModifier &) const;
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
          extern PyType_Def PY_TYPE_DEF(AbstractMeasurementBuilder);
          extern PyTypeObject *PY_TYPE(AbstractMeasurementBuilder);

          class t_AbstractMeasurementBuilder {
          public:
            PyObject_HEAD
            AbstractMeasurementBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractMeasurementBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractMeasurementBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractMeasurementBuilder&, PyTypeObject *);
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
