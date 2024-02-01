#ifndef org_orekit_gnss_attitude_PythonGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_PythonGNSSAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace gnss {
      namespace attitude {
        class GNSSAttitudeProvider;
      }
    }
    namespace attitudes {
      class FieldAttitude;
      class Attitude;
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

        class PythonGNSSAttitudeProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getAttitude_aab1c6ab68ffdcbb,
            mid_getAttitude_a02177519e1b6a45,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_validityEnd_80e11148db499dda,
            mid_validityStart_80e11148db499dda,
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
