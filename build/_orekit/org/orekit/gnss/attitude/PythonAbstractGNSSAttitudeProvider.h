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
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class TimeStampedFieldAngularCoordinates;
      class TimeStampedAngularCoordinates;
    }
    namespace frames {
      class Frame;
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
            mid_init$_1f1fb4db65d1e285,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
