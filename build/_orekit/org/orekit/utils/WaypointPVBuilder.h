#ifndef org_orekit_utils_WaypointPVBuilder_H
#define org_orekit_utils_WaypointPVBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class WaypointPVBuilder;
      class WaypointPVBuilder$InterpolationFactory;
      class PVCoordinatesProvider;
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
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

      class WaypointPVBuilder : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4ba8dde6ff9937ce,
          mid_addWaypoint_519b23bb689342b8,
          mid_build_7044cb1966c8a481,
          mid_cartesianBuilder_062020604dbc5286,
          mid_constantAfter_4d55dff8aba47889,
          mid_constantBefore_4d55dff8aba47889,
          mid_greatCircleBuilder_062020604dbc5286,
          mid_invalidAfter_4d55dff8aba47889,
          mid_invalidBefore_4d55dff8aba47889,
          mid_loxodromeBuilder_062020604dbc5286,
          mid_createInitial_9986637990d6c960,
          mid_createFinal_9986637990d6c960,
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
