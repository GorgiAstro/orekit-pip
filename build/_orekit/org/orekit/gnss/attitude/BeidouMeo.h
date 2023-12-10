#ifndef org_orekit_gnss_attitude_BeidouMeo_H
#define org_orekit_gnss_attitude_BeidouMeo_H

#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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

        class BeidouMeo : public ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider {
         public:
          enum {
            mid_init$_65fb710ff0be7da1,
            mid_correctedYaw_89a7d6ae4e1f14a2,
            mid_correctedYaw_70e28bc10c6688c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BeidouMeo(jobject obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BeidouMeo(const BeidouMeo& obj) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(obj) {}

          BeidouMeo(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::frames::Frame &);
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
        extern PyType_Def PY_TYPE_DEF(BeidouMeo);
        extern PyTypeObject *PY_TYPE(BeidouMeo);

        class t_BeidouMeo {
        public:
          PyObject_HEAD
          BeidouMeo object;
          static PyObject *wrap_Object(const BeidouMeo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif