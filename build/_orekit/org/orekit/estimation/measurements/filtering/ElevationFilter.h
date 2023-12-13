#ifndef org_orekit_estimation_measurements_filtering_ElevationFilter_H
#define org_orekit_estimation_measurements_filtering_ElevationFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class GroundStation;
        namespace filtering {
          class MeasurementFilter;
        }
      }
    }
    namespace propagation {
      class SpacecraftState;
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

          class ElevationFilter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_32ec6e08b820ba55,
              mid_filter_5714f5cbb8239657,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ElevationFilter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ElevationFilter(const ElevationFilter& obj) : ::java::lang::Object(obj) {}

            ElevationFilter(const ::org::orekit::estimation::measurements::GroundStation &, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(ElevationFilter);
          extern PyTypeObject *PY_TYPE(ElevationFilter);

          class t_ElevationFilter {
          public:
            PyObject_HEAD
            ElevationFilter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ElevationFilter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ElevationFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ElevationFilter&, PyTypeObject *);
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
