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
        class EstimationModifier;
        class ObservedMeasurement;
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
              mid_addModifier_a3bed5360bec47d0,
              mid_getModifiers_d751c1a57012b438,
              mid_getSatellites_27bb228995072af3,
              mid_init_ce7d94fe97fdcf55,
              mid_getEnd_80e11148db499dda,
              mid_getStart_80e11148db499dda,
              mid_getTheoreticalStandardDeviation_be783177b060994b,
              mid_getBaseWeight_be783177b060994b,
              mid_getNoise_be783177b060994b,
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
