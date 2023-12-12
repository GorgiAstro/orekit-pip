#ifndef org_orekit_estimation_measurements_filtering_MeasurementFilter_H
#define org_orekit_estimation_measurements_filtering_MeasurementFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
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
        namespace filtering {

          class MeasurementFilter : public ::java::lang::Object {
           public:
            enum {
              mid_filter_87933cc299a70778,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MeasurementFilter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MeasurementFilter(const MeasurementFilter& obj) : ::java::lang::Object(obj) {}

            void filter(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::orekit::propagation::SpacecraftState &) const;
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
        namespace filtering {
          extern PyType_Def PY_TYPE_DEF(MeasurementFilter);
          extern PyTypeObject *PY_TYPE(MeasurementFilter);

          class t_MeasurementFilter {
          public:
            PyObject_HEAD
            MeasurementFilter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_MeasurementFilter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const MeasurementFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const MeasurementFilter&, PyTypeObject *);
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
