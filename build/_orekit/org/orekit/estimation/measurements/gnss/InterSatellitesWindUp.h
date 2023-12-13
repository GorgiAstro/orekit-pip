#ifndef org_orekit_estimation_measurements_gnss_InterSatellitesWindUp_H
#define org_orekit_estimation_measurements_gnss_InterSatellitesWindUp_H

#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class InterSatellitesPhase;
        }
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
        namespace gnss {

          class InterSatellitesWindUp : public ::org::orekit::estimation::measurements::gnss::AbstractWindUp {
           public:
            enum {
              mid_emitterToInert_3b9f748b89094cc6,
              mid_receiverToInert_3b9f748b89094cc6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InterSatellitesWindUp(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InterSatellitesWindUp(const InterSatellitesWindUp& obj) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(InterSatellitesWindUp);
          extern PyTypeObject *PY_TYPE(InterSatellitesWindUp);

          class t_InterSatellitesWindUp {
          public:
            PyObject_HEAD
            InterSatellitesWindUp object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_InterSatellitesWindUp *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const InterSatellitesWindUp&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const InterSatellitesWindUp&, PyTypeObject *);
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
