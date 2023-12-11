#ifndef org_orekit_gnss_attitude_PythonAbstractGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_PythonAbstractGNSSAttitudeProvider_H

#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class ExtendedPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
    namespace gnss {
      namespace attitude {

        class PythonAbstractGNSSAttitudeProvider : public ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider {
         public:
          enum {
            mid_init$_c9803b569bb20b21,
            mid_finalize_0640e6acf969ed28,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
