#ifndef org_orekit_utils_WaypointPVBuilder_H
#define org_orekit_utils_WaypointPVBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class WaypointPVBuilder;
      class WaypointPVBuilder$InterpolationFactory;
      class PVCoordinatesProvider;
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
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

      class WaypointPVBuilder : public ::java::lang::Object {
       public:
        enum {
          mid_init$_00e7f44cf802eaa1,
          mid_addWaypoint_b67b047f21c6c1d4,
          mid_build_781ab98286dad7d5,
          mid_cartesianBuilder_526e5739b24da72f,
          mid_constantAfter_cb2804c8e2e69709,
          mid_constantBefore_cb2804c8e2e69709,
          mid_greatCircleBuilder_526e5739b24da72f,
          mid_invalidAfter_cb2804c8e2e69709,
          mid_invalidBefore_cb2804c8e2e69709,
          mid_loxodromeBuilder_526e5739b24da72f,
          mid_createInitial_f3fa2dad6a61f56c,
          mid_createFinal_f3fa2dad6a61f56c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WaypointPVBuilder(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WaypointPVBuilder(const WaypointPVBuilder& obj) : ::java::lang::Object(obj) {}

        WaypointPVBuilder(const ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory &, const ::org::orekit::bodies::OneAxisEllipsoid &);

        WaypointPVBuilder addWaypoint(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::PVCoordinatesProvider build() const;
        static WaypointPVBuilder cartesianBuilder(const ::org::orekit::bodies::OneAxisEllipsoid &);
        WaypointPVBuilder constantAfter() const;
        WaypointPVBuilder constantBefore() const;
        static WaypointPVBuilder greatCircleBuilder(const ::org::orekit::bodies::OneAxisEllipsoid &);
        WaypointPVBuilder invalidAfter() const;
        WaypointPVBuilder invalidBefore() const;
        static WaypointPVBuilder loxodromeBuilder(const ::org::orekit::bodies::OneAxisEllipsoid &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(WaypointPVBuilder);
      extern PyTypeObject *PY_TYPE(WaypointPVBuilder);

      class t_WaypointPVBuilder {
      public:
        PyObject_HEAD
        WaypointPVBuilder object;
        static PyObject *wrap_Object(const WaypointPVBuilder&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
