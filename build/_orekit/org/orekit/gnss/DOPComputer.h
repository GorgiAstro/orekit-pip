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
    namespace gnss {
      class DOPComputer;
      class DOP;
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace propagation {
      class Propagator;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ElevationMask;
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
          mid_compute_370dd6e157cc4c90,
          mid_create_759c52f3efaa4f0c,
          mid_getElevationMask_a2b53d9e5ddb8a2d,
          mid_getMinElevation_dff5885c2c873297,
          mid_withElevationMask_fbe70e78b6eb5b3a,
          mid_withMinElevation_c509d9237ff82859,
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
