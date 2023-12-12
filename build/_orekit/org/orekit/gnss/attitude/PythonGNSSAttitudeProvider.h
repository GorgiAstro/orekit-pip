#ifndef org_orekit_gnss_attitude_PythonGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_PythonGNSSAttitudeProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace gnss {
      namespace attitude {
        class GNSSAttitudeProvider;
      }
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace attitudes {
      class FieldAttitude;
      class Attitude;
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

        class PythonGNSSAttitudeProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getAttitude_77e3383de01f3e48,
            mid_getAttitude_1306ac39e1d2de3f,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_validityEnd_7a97f7e149e79afb,
            mid_validityStart_7a97f7e149e79afb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonGNSSAttitudeProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonGNSSAttitudeProvider(const PythonGNSSAttitudeProvider& obj) : ::java::lang::Object(obj) {}

          PythonGNSSAttitudeProvider();

          void finalize() const;
          ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::orekit::time::AbsoluteDate validityEnd() const;
          ::org::orekit::time::AbsoluteDate validityStart() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonGNSSAttitudeProvider);
        extern PyTypeObject *PY_TYPE(PythonGNSSAttitudeProvider);

        class t_PythonGNSSAttitudeProvider {
        public:
          PyObject_HEAD
          PythonGNSSAttitudeProvider object;
          static PyObject *wrap_Object(const PythonGNSSAttitudeProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
