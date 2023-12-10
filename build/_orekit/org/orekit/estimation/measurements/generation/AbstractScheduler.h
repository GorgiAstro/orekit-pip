#ifndef org_orekit_estimation_measurements_generation_AbstractScheduler_H
#define org_orekit_estimation_measurements_generation_AbstractScheduler_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class SortedSet;
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
          class Scheduler;
        }
        class ObservedMeasurement;
        class ObservableSatellite;
      }
    }
    namespace time {
      class AbsoluteDate;
      class DatesSelector;
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

          class AbstractScheduler : public ::java::lang::Object {
           public:
            enum {
              mid_generate_e61f6829e4c9c5f5,
              mid_getBuilder_63a5a16953d5c5b8,
              mid_getSelector_3bc688e0bfd96a7f,
              mid_init_a9e71d848b81c8f8,
              mid_measurementIsFeasible_db6d81809797ddaa,
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
