#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractWindUp_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractWindUp_H

#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class Dipole;
        }
        class EstimatedMeasurementBase;
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class PythonAbstractWindUp : public ::org::orekit::estimation::measurements::gnss::AbstractWindUp {
           public:
            enum {
              mid_init$_9fe7365dd1a516af,
              mid_emitterToInert_f462106a6ca97aca,
              mid_finalize_ff7cb6c242604316,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              mid_receiverToInert_f462106a6ca97aca,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractWindUp(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractWindUp(const PythonAbstractWindUp& obj) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(obj) {}

            PythonAbstractWindUp(const ::org::orekit::estimation::measurements::gnss::Dipole &, const ::org::orekit::estimation::measurements::gnss::Dipole &);

            ::org::hipparchus::geometry::euclidean::threed::Rotation emitterToInert(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
            void finalize() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            ::org::hipparchus::geometry::euclidean::threed::Rotation receiverToInert(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAbstractWindUp);
          extern PyTypeObject *PY_TYPE(PythonAbstractWindUp);

          class t_PythonAbstractWindUp {
          public:
            PyObject_HEAD
            PythonAbstractWindUp object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonAbstractWindUp *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonAbstractWindUp&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonAbstractWindUp&, PyTypeObject *);
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
