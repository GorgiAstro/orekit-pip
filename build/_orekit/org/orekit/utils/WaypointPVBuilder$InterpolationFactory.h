#ifndef org_orekit_utils_WaypointPVBuilder$InterpolationFactory_H
#define org_orekit_utils_WaypointPVBuilder$InterpolationFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace utils {
      class PVCoordinatesProvider;
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
    namespace utils {

      class WaypointPVBuilder$InterpolationFactory : public ::java::lang::Object {
       public:
        enum {
          mid_create_db1d94629119bb44,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WaypointPVBuilder$InterpolationFactory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WaypointPVBuilder$InterpolationFactory(const WaypointPVBuilder$InterpolationFactory& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::utils::PVCoordinatesProvider create(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::OneAxisEllipsoid &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory);
      extern PyTypeObject *PY_TYPE(WaypointPVBuilder$InterpolationFactory);

      class t_WaypointPVBuilder$InterpolationFactory {
      public:
        PyObject_HEAD
        WaypointPVBuilder$InterpolationFactory object;
        static PyObject *wrap_Object(const WaypointPVBuilder$InterpolationFactory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
