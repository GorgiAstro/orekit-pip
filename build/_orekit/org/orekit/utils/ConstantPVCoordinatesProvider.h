#ifndef org_orekit_utils_ConstantPVCoordinatesProvider_H
#define org_orekit_utils_ConstantPVCoordinatesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
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

      class ConstantPVCoordinatesProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_1843aaa1680f622a,
          mid_init$_33b2482912e45406,
          mid_init$_8189496ebb480b99,
          mid_getPVCoordinates_6236a35378ed47a5,
          mid_getPosition_abe01c75f7e82353,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ConstantPVCoordinatesProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ConstantPVCoordinatesProvider(const ConstantPVCoordinatesProvider& obj) : ::java::lang::Object(obj) {}

        ConstantPVCoordinatesProvider(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::OneAxisEllipsoid &);
        ConstantPVCoordinatesProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &);
        ConstantPVCoordinatesProvider(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &);

        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ConstantPVCoordinatesProvider);
      extern PyTypeObject *PY_TYPE(ConstantPVCoordinatesProvider);

      class t_ConstantPVCoordinatesProvider {
      public:
        PyObject_HEAD
        ConstantPVCoordinatesProvider object;
        static PyObject *wrap_Object(const ConstantPVCoordinatesProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
