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
        namespace generation {
          class MeasurementBuilder;
        }
        class ObservedMeasurement;
        class EstimationModifier;
        class ObservableSatellite;
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
              mid_addModifier_baf3397e6fffc21d,
              mid_getModifiers_2afa36052df4765d,
              mid_getSatellites_f81b672126a6576d,
              mid_init_a9e71d848b81c8f8,
              mid_getStart_85703d13e302437e,
              mid_getEnd_85703d13e302437e,
              mid_getTheoreticalStandardDeviation_60c7040667a7dc5c,
              mid_getBaseWeight_60c7040667a7dc5c,
              mid_getNoise_60c7040667a7dc5c,
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
