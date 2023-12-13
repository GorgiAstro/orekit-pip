#ifndef org_orekit_estimation_measurements_generation_AbstractMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_AbstractMeasurementBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
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
        class ObservedMeasurement;
        class ObservableSatellite;
        namespace generation {
          class MeasurementBuilder;
        }
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

          class AbstractMeasurementBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_addModifier_cb38ed914ba48f20,
              mid_getModifiers_e62d3bb06d56d7e3,
              mid_getSatellites_eb47c48e4fca882c,
              mid_init_f89af00fc113b524,
              mid_getStart_c325492395d89b24,
              mid_getEnd_c325492395d89b24,
              mid_getTheoreticalStandardDeviation_25e1757a36c4dde2,
              mid_getBaseWeight_25e1757a36c4dde2,
              mid_getNoise_25e1757a36c4dde2,
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
