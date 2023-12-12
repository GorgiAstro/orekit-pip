#ifndef org_orekit_gnss_attitude_Glonass_H
#define org_orekit_gnss_attitude_Glonass_H

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

        class Glonass : public ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider {
         public:
          enum {
            mid_init$_d2624b53a7984676,
            mid_correctedYaw_c46751716d57fe1f,
            mid_correctedYaw_2a43991494de952e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Glonass(jobject obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Glonass(const Glonass& obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {}

          static jdouble DEFAULT_YAW_RATE;

          Glonass(jdouble, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::frames::Frame &);
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
        extern PyType_Def PY_TYPE_DEF(Glonass);
        extern PyTypeObject *PY_TYPE(Glonass);

        class t_Glonass {
        public:
          PyObject_HEAD
          Glonass object;
          static PyObject *wrap_Object(const Glonass&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
