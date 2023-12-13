#ifndef org_orekit_utils_WaypointPVBuilder_H
#define org_orekit_utils_WaypointPVBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class WaypointPVBuilder$InterpolationFactory;
      class PVCoordinatesProvider;
      class WaypointPVBuilder;
    }
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
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
          mid_init$_993cc46df621d9cd,
          mid_addWaypoint_28e0163f5d6e8ccf,
          mid_build_8a41319e47f3bd7c,
          mid_cartesianBuilder_240b6619f67611e2,
          mid_constantAfter_e846a6f6ef5fc3c6,
          mid_constantBefore_e846a6f6ef5fc3c6,
          mid_greatCircleBuilder_240b6619f67611e2,
          mid_invalidAfter_e846a6f6ef5fc3c6,
          mid_invalidBefore_e846a6f6ef5fc3c6,
          mid_loxodromeBuilder_240b6619f67611e2,
          mid_createInitial_d2a94228dd25ab45,
          mid_createFinal_d2a94228dd25ab45,
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
