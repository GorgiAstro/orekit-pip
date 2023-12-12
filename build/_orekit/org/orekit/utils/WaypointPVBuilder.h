#ifndef org_orekit_utils_WaypointPVBuilder_H
#define org_orekit_utils_WaypointPVBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class WaypointPVBuilder$InterpolationFactory;
      class WaypointPVBuilder;
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
          mid_init$_f5d5f5e9f7bcedd4,
          mid_addWaypoint_b6e13afcf40c54d4,
          mid_build_dec199e86bf037eb,
          mid_cartesianBuilder_69b7371cb686d84f,
          mid_constantAfter_402772324bc88cf0,
          mid_constantBefore_402772324bc88cf0,
          mid_greatCircleBuilder_69b7371cb686d84f,
          mid_invalidAfter_402772324bc88cf0,
          mid_invalidBefore_402772324bc88cf0,
          mid_loxodromeBuilder_69b7371cb686d84f,
          mid_createInitial_c79d877976710bc0,
          mid_createFinal_c79d877976710bc0,
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
