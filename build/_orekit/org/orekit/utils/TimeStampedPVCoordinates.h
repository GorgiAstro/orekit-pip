#ifndef org_orekit_utils_TimeStampedPVCoordinates_H
#define org_orekit_utils_TimeStampedPVCoordinates_H

#include "org/orekit/utils/PVCoordinates.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class TimeScale;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class TimeStampedPVCoordinates : public ::org::orekit::utils::PVCoordinates {
       public:
        enum {
          mid_init$_e9df8c391b63f025,
          mid_init$_941d8dc495969cee,
          mid_init$_1f308a96dce4eb31,
          mid_init$_35ede516ab2a5b7c,
          mid_init$_0ab6ea6a7f063b84,
          mid_init$_fcb73ff3ac48befe,
          mid_init$_7a95e2f0247d033a,
          mid_init$_121df25c9d51d7e4,
          mid_init$_3f2c926a9dd0cc8e,
          mid_getDate_aaa854c403487cf3,
          mid_shiftedBy_a09436a76601e5ee,
          mid_toString_0090f7797e403f43,
          mid_toString_44577b71ebe5fefb,
          mid_toTaylorProvider_4ac4b31376cfcd98,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedPVCoordinates(jobject obj) : ::org::orekit::utils::PVCoordinates(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedPVCoordinates(const TimeStampedPVCoordinates& obj) : ::org::orekit::utils::PVCoordinates(obj) {}

        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::utils::PVCoordinates &, jdouble, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::utils::PVCoordinates &, jdouble, const ::org::orekit::utils::PVCoordinates &, jdouble, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::utils::PVCoordinates &, jdouble, const ::org::orekit::utils::PVCoordinates &, jdouble, const ::org::orekit::utils::PVCoordinates &, jdouble, const ::org::orekit::utils::PVCoordinates &);

        ::org::orekit::time::AbsoluteDate getDate() const;
        TimeStampedPVCoordinates shiftedBy(jdouble) const;
        ::java::lang::String toString() const;
        ::java::lang::String toString(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::utils::PVCoordinatesProvider toTaylorProvider(const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedPVCoordinates);
      extern PyTypeObject *PY_TYPE(TimeStampedPVCoordinates);

      class t_TimeStampedPVCoordinates {
      public:
        PyObject_HEAD
        TimeStampedPVCoordinates object;
        static PyObject *wrap_Object(const TimeStampedPVCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
