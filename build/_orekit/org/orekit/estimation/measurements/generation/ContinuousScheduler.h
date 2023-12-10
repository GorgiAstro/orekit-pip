#ifndef org_orekit_estimation_measurements_generation_ContinuousScheduler_H
#define org_orekit_estimation_measurements_generation_ContinuousScheduler_H

#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          class MeasurementBuilder;
        }
      }
    }
    namespace time {
      class DatesSelector;
      class AbsoluteDate;
    }
  }
}
namespace java {
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

          class ContinuousScheduler : public ::org::orekit::estimation::measurements::generation::AbstractScheduler {
           public:
            enum {
              mid_init$_30703ff0587c737c,
              mid_measurementIsFeasible_ee2067c5768b6768,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ContinuousScheduler(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ContinuousScheduler(const ContinuousScheduler& obj) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(obj) {}

            ContinuousScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder &, const ::org::orekit::time::DatesSelector &);

            jboolean measurementIsFeasible(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(ContinuousScheduler);
          extern PyTypeObject *PY_TYPE(ContinuousScheduler);

          class t_ContinuousScheduler {
          public:
            PyObject_HEAD
            ContinuousScheduler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ContinuousScheduler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ContinuousScheduler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ContinuousScheduler&, PyTypeObject *);
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
