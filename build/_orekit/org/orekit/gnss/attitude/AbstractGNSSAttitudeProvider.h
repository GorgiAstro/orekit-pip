#ifndef org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        class GNSSAttitudeProvider;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
            mid_getAttitude_896ee4d68989b1e8,
            mid_getAttitude_21845cfb0034fe1c,
            mid_validityEnd_c325492395d89b24,
            mid_validityStart_c325492395d89b24,
            mid_getInertialFrame_2c51111cc6894ba1,
            mid_getSun_59b14a9bb85bbba5,
            mid_correctedYaw_0e415c4bbe3bedab,
            mid_correctedYaw_4231606446b6d08a,
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

          ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
