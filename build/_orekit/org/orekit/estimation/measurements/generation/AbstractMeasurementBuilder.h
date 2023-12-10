#ifndef org_orekit_estimation_measurements_generation_AbstractMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_AbstractMeasurementBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        namespace generation {
          class MeasurementBuilder;
        }
        class ObservedMeasurement;
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
              mid_addModifier_fc816f44bfa3d437,
              mid_getModifiers_a6156df500549a58,
              mid_getSatellites_ff20f279f9ba9f9e,
              mid_init_d958a9bfde45c759,
              mid_getStart_aaa854c403487cf3,
              mid_getEnd_aaa854c403487cf3,
              mid_getTheoreticalStandardDeviation_7cdc325af0834901,
              mid_getBaseWeight_7cdc325af0834901,
              mid_getNoise_7cdc325af0834901,
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