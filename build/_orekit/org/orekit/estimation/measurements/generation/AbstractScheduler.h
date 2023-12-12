#ifndef org_orekit_estimation_measurements_generation_AbstractScheduler_H
#define org_orekit_estimation_measurements_generation_AbstractScheduler_H

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
        namespace generation {
          class Scheduler;
          class MeasurementBuilder;
        }
        class ObservedMeasurement;
        class ObservableSatellite;
      }
    }
    namespace time {
      class DatesSelector;
      class AbsoluteDate;
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
              mid_generate_efa69a4463f8239b,
              mid_getBuilder_73d2d5822258be13,
              mid_getSelector_78eb80fc74b267d2,
              mid_init_d5db9a5f2035671b,
              mid_measurementIsFeasible_981023bfa4a8a093,
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
