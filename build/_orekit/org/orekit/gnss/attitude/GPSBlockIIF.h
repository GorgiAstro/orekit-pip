#ifndef org_orekit_gnss_attitude_GPSBlockIIF_H
#define org_orekit_gnss_attitude_GPSBlockIIF_H

#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
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

        class GPSBlockIIF : public ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider {
         public:
          enum {
            mid_init$_6747e305f69aea0f,
            mid_correctedYaw_3bb932fc0c863341,
            mid_correctedYaw_7e83c4f910737b79,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GPSBlockIIF(jobject obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GPSBlockIIF(const GPSBlockIIF& obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {}

          static jdouble DEFAULT_YAW_BIAS;
          static jdouble DEFAULT_YAW_RATE;

          GPSBlockIIF(jdouble, jdouble, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::frames::Frame &);
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
        extern PyType_Def PY_TYPE_DEF(GPSBlockIIF);
        extern PyTypeObject *PY_TYPE(GPSBlockIIF);

        class t_GPSBlockIIF {
        public:
          PyObject_HEAD
          GPSBlockIIF object;
          static PyObject *wrap_Object(const GPSBlockIIF&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
