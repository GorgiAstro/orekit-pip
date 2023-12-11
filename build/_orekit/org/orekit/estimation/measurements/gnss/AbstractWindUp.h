#ifndef org_orekit_estimation_measurements_gnss_AbstractWindUp_H
#define org_orekit_estimation_measurements_gnss_AbstractWindUp_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
      }
    }
    namespace utils {
      class ParameterDriver;
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
        namespace gnss {

          class AbstractWindUp : public ::java::lang::Object {
           public:
            enum {
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              mid_receiverToInert_d9b98e1ca49f6e0d,
              mid_emitterToInert_d9b98e1ca49f6e0d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractWindUp(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractWindUp(const AbstractWindUp& obj) : ::java::lang::Object(obj) {}

            ::java::util::List getParametersDrivers() const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
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
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(AbstractWindUp);
          extern PyTypeObject *PY_TYPE(AbstractWindUp);

          class t_AbstractWindUp {
          public:
            PyObject_HEAD
            AbstractWindUp object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractWindUp *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractWindUp&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractWindUp&, PyTypeObject *);
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
