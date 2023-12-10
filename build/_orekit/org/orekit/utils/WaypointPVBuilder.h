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
          mid_init$_72a7d1b6cac17025,
          mid_addWaypoint_98c7b225ff22cf1e,
          mid_build_903aca6bb4523e29,
          mid_cartesianBuilder_ffde877dfa1e2dd2,
          mid_constantAfter_a5badd7a0674683f,
          mid_constantBefore_a5badd7a0674683f,
          mid_greatCircleBuilder_ffde877dfa1e2dd2,
          mid_invalidAfter_a5badd7a0674683f,
          mid_invalidBefore_a5badd7a0674683f,
          mid_loxodromeBuilder_ffde877dfa1e2dd2,
          mid_createInitial_f9ed9bcb9bfb760e,
          mid_createFinal_f9ed9bcb9bfb760e,
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
