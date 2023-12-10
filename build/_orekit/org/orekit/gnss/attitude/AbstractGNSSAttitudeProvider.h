#ifndef org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_AbstractGNSSAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace gnss {
      namespace attitude {
        class GNSSAttitudeProvider;
      }
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
            mid_getAttitude_d2b70935d932b5c5,
            mid_getAttitude_4e541876ea7d5bd0,
            mid_validityEnd_85703d13e302437e,
            mid_validityStart_85703d13e302437e,
            mid_getSun_6c6c680f468e3316,
            mid_getInertialFrame_b86f9f61d97a7244,
            mid_correctedYaw_dbb16eda5c9f6b1d,
            mid_correctedYaw_64e3133ed57cb807,
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
