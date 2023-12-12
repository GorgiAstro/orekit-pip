#ifndef org_orekit_gnss_DOPComputer_H
#define org_orekit_gnss_DOPComputer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class DOPComputer;
      class DOP;
    }
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
    namespace utils {
      class ElevationMask;
    }
    namespace propagation {
      class Propagator;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class DOPComputer : public ::java::lang::Object {
       public:
        enum {
          mid_compute_192575f77f52acac,
          mid_create_6b6539a775e19157,
          mid_getElevationMask_d8e21ec66d7f6ed7,
          mid_getMinElevation_557b8123390d8d0c,
          mid_withElevationMask_399027060c7ec7c2,
          mid_withMinElevation_4d2a17737163760c,
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
