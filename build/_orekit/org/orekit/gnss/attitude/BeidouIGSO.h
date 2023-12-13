#ifndef org_orekit_gnss_attitude_BeidouIGSO_H
#define org_orekit_gnss_attitude_BeidouIGSO_H

#include "org/orekit/gnss/attitude/BeidouMeo.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ExtendedPVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
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

        class BeidouIGSO : public ::org::orekit::gnss::attitude::BeidouMeo {
         public:
          enum {
            mid_init$_a872ffc4376f5f34,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BeidouIGSO(jobject obj) : ::org::orekit::gnss::attitude::BeidouMeo(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BeidouIGSO(const BeidouIGSO& obj) : ::org::orekit::gnss::attitude::BeidouMeo(obj) {}

          BeidouIGSO(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::frames::Frame &);
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
        extern PyType_Def PY_TYPE_DEF(BeidouIGSO);
        extern PyTypeObject *PY_TYPE(BeidouIGSO);

        class t_BeidouIGSO {
        public:
          PyObject_HEAD
          BeidouIGSO object;
          static PyObject *wrap_Object(const BeidouIGSO&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
