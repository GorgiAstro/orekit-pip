#ifndef org_orekit_gnss_DOPComputer_H
#define org_orekit_gnss_DOPComputer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ElevationMask;
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace gnss {
      class DOPComputer;
      class DOP;
    }
    namespace propagation {
      class Propagator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class DOPComputer : public ::java::lang::Object {
       public:
        enum {
          mid_compute_46cd4086e16ddba4,
          mid_create_c9d116723f4a2a31,
          mid_getElevationMask_6e01f84e52d7314a,
          mid_getMinElevation_9981f74b2d109da6,
          mid_withElevationMask_39869f1f4c689943,
          mid_withMinElevation_3c85f30646426402,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DOPComputer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DOPComputer(const DOPComputer& obj) : ::java::lang::Object(obj) {}

        static jdouble DOP_MIN_ELEVATION;

        ::org::orekit::gnss::DOP compute(const ::org::orekit::time::AbsoluteDate &, const ::java::util::List &) const;
        static DOPComputer create(const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::bodies::GeodeticPoint &);
        ::org::orekit::utils::ElevationMask getElevationMask() const;
        jdouble getMinElevation() const;
        DOPComputer withElevationMask(const ::org::orekit::utils::ElevationMask &) const;
        DOPComputer withMinElevation(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(DOPComputer);
      extern PyTypeObject *PY_TYPE(DOPComputer);

      class t_DOPComputer {
      public:
        PyObject_HEAD
        DOPComputer object;
        static PyObject *wrap_Object(const DOPComputer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
