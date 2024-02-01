#ifndef org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H

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
            mid_getAttitude_aab1c6ab68ffdcbb,
            mid_getAttitude_a02177519e1b6a45,
            mid_validityEnd_80e11148db499dda,
            mid_validityStart_80e11148db499dda,
            mid_getSun_b623c04f72a10774,
            mid_getInertialFrame_cb151471db4570f0,
            mid_correctedYaw_7e83c4f910737b79,
            mid_correctedYaw_3bb932fc0c863341,
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
