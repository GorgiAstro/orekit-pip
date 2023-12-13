#ifndef org_orekit_gnss_attitude_PythonAbstractGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_PythonAbstractGNSSAttitudeProvider_H

#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
      class TimeStampedFieldAngularCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        class PythonAbstractGNSSAttitudeProvider : public ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider {
         public:
          enum {
            mid_init$_a872ffc4376f5f34,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractGNSSAttitudeProvider(jobject obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractGNSSAttitudeProvider(const PythonAbstractGNSSAttitudeProvider& obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {}

          PythonAbstractGNSSAttitudeProvider(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::frames::Frame &);

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractGNSSAttitudeProvider);
        extern PyTypeObject *PY_TYPE(PythonAbstractGNSSAttitudeProvider);

        class t_PythonAbstractGNSSAttitudeProvider {
        public:
          PyObject_HEAD
          PythonAbstractGNSSAttitudeProvider object;
          static PyObject *wrap_Object(const PythonAbstractGNSSAttitudeProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
