#ifndef org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
    }
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
    namespace frames {
      class Frame;
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
    namespace gnss {
      namespace attitude {

        class AbstractGNSSAttitudeProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getAttitude_1306ac39e1d2de3f,
            mid_getAttitude_77e3383de01f3e48,
            mid_validityEnd_7a97f7e149e79afb,
            mid_validityStart_7a97f7e149e79afb,
            mid_getSun_9aa0b612d90098c2,
            mid_getInertialFrame_6c9bc0a928c56d4e,
            mid_correctedYaw_c46751716d57fe1f,
            mid_correctedYaw_2a43991494de952e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractGNSSAttitudeProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractGNSSAttitudeProvider(const AbstractGNSSAttitudeProvider& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractGNSSAttitudeProvider);
        extern PyTypeObject *PY_TYPE(AbstractGNSSAttitudeProvider);

        class t_AbstractGNSSAttitudeProvider {
        public:
          PyObject_HEAD
          AbstractGNSSAttitudeProvider object;
          static PyObject *wrap_Object(const AbstractGNSSAttitudeProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
