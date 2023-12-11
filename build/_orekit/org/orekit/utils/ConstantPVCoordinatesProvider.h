#ifndef org_orekit_utils_ConstantPVCoordinatesProvider_H
#define org_orekit_utils_ConstantPVCoordinatesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
    namespace utils {
      class PVCoordinates;
      class PVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
          mid_init$_ed6bf324da5460e4,
          mid_init$_a6a752e8ad147b96,
          mid_init$_1caf593de129c444,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_getPosition_7ca40559664606d9,
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
