#ifndef org_orekit_estimation_measurements_generation_Scheduler_H
#define org_orekit_estimation_measurements_generation_Scheduler_H

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
          class MeasurementBuilder;
        }
        class ObservableSatellite;
      }
    }
    namespace time {
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

          class Scheduler : public ::java::lang::Object {
           public:
            enum {
              mid_generate_efa69a4463f8239b,
              mid_getBuilder_73d2d5822258be13,
              mid_init_d5db9a5f2035671b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Scheduler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Scheduler(const Scheduler& obj) : ::java::lang::Object(obj) {}

            ::java::util::SortedSet generate(const ::java::util::Map &) const;
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder getBuilder() const;
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
          extern PyType_Def PY_TYPE_DEF(Scheduler);
          extern PyTypeObject *PY_TYPE(Scheduler);

          class t_Scheduler {
          public:
            PyObject_HEAD
            Scheduler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Scheduler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Scheduler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Scheduler&, PyTypeObject *);
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
