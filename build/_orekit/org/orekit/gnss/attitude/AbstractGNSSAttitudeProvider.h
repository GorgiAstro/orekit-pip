#ifndef org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
    }
    namespace gnss {
      namespace attitude {
        class GNSSAttitudeProvider;
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
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
            mid_getAttitude_5341a8481841f90c,
            mid_getAttitude_455b5c75f9292826,
            mid_validityEnd_aaa854c403487cf3,
            mid_validityStart_aaa854c403487cf3,
            mid_getSun_488529e6bae70b9b,
            mid_getInertialFrame_c8fe21bcdac65bf6,
            mid_correctedYaw_70e28bc10c6688c2,
            mid_correctedYaw_89a7d6ae4e1f14a2,
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
