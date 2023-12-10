#ifndef org_orekit_estimation_measurements_gnss_AbstractWindUp_H
#define org_orekit_estimation_measurements_gnss_AbstractWindUp_H

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
        class EstimatedMeasurementBase;
        class ObservedMeasurement;
        class EstimationModifier;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
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
              mid_getParametersDrivers_a6156df500549a58,
              mid_modifyWithoutDerivatives_811f96960c94c1de,
              mid_emitterToInert_fd1bf64855bd2d79,
              mid_receiverToInert_fd1bf64855bd2d79,
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
