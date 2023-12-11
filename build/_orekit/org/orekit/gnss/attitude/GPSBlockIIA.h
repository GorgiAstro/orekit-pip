#ifndef org_orekit_gnss_attitude_GPSBlockIIA_H
#define org_orekit_gnss_attitude_GPSBlockIIA_H

#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
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

        class GPSBlockIIA : public ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider {
         public:
          enum {
            mid_init$_edf894401b24faef,
            mid_getDefaultYawRate_69cfb132c661aca4,
            mid_correctedYaw_c46751716d57fe1f,
            mid_correctedYaw_2a43991494de952e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GPSBlockIIA(jobject obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GPSBlockIIA(const GPSBlockIIA& obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {}

          static jdouble DEFAULT_YAW_BIAS;

          GPSBlockIIA(jdouble, jdouble, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::frames::Frame &);

          static jdouble getDefaultYawRate(jint);
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
        extern PyType_Def PY_TYPE_DEF(GPSBlockIIA);
        extern PyTypeObject *PY_TYPE(GPSBlockIIA);

        class t_GPSBlockIIA {
        public:
          PyObject_HEAD
          GPSBlockIIA object;
          static PyObject *wrap_Object(const GPSBlockIIA&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
