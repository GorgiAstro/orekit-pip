#ifndef org_orekit_gnss_DOPComputer_H
#define org_orekit_gnss_DOPComputer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class DOP;
      class DOPComputer;
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace propagation {
      class Propagator;
    }
    namespace utils {
      class ElevationMask;
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
          mid_compute_5666ea45ed4be699,
          mid_create_806c880f31bef4aa,
          mid_getElevationMask_5d6f826de9792bc8,
          mid_getMinElevation_456d9a2f64d6b28d,
          mid_withElevationMask_d0c786f768b90623,
          mid_withMinElevation_13b58ecd66c656d0,
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
