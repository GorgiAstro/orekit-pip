#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractWindUp_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractWindUp_H

#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        namespace gnss {
          class Dipole;
        }
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class PythonAbstractWindUp : public ::org::orekit::estimation::measurements::gnss::AbstractWindUp {
           public:
            enum {
              mid_init$_a460ca1565b8ffe9,
              mid_emitterToInert_3b9f748b89094cc6,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
              mid_receiverToInert_3b9f748b89094cc6,
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
