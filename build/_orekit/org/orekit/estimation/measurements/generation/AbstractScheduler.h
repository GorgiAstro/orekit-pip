#ifndef org_orekit_estimation_measurements_generation_AbstractScheduler_H
#define org_orekit_estimation_measurements_generation_AbstractScheduler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        namespace generation {
          class Scheduler;
          class MeasurementBuilder;
        }
        class ObservedMeasurement;
      }
    }
    namespace time {
      class DatesSelector;
      class AbsoluteDate;
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class SortedSet;
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

          class AbstractScheduler : public ::java::lang::Object {
           public:
            enum {
              mid_generate_22733af3de6e4c17,
              mid_getBuilder_f2ad316b33dc9e1f,
              mid_getSelector_3b7c5bc809d41a49,
              mid_init_d958a9bfde45c759,
              mid_measurementIsFeasible_ee2067c5768b6768,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractScheduler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractScheduler(const AbstractScheduler& obj) : ::java::lang::Object(obj) {}

            ::java::util::SortedSet generate(const ::java::util::Map &) const;
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder getBuilder() const;
            ::org::orekit::time::DatesSelector getSelector() const;
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
          extern PyType_Def PY_TYPE_DEF(AbstractScheduler);
          extern PyTypeObject *PY_TYPE(AbstractScheduler);

          class t_AbstractScheduler {
          public:
            PyObject_HEAD
            AbstractScheduler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractScheduler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractScheduler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractScheduler&, PyTypeObject *);
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
