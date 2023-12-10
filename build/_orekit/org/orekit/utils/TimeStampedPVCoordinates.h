#ifndef org_orekit_utils_TimeStampedPVCoordinates_H
#define org_orekit_utils_TimeStampedPVCoordinates_H

#include "org/orekit/utils/PVCoordinates.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class TimeScale;
      class AbsoluteDate;
      class TimeStamped;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class TimeStampedPVCoordinates;
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
          mid_init$_f88e9097ff8a5727,
          mid_init$_db8760ebddf85268,
          mid_init$_d039183b82af87d6,
          mid_init$_9ff2f3ca38e5cacd,
          mid_init$_eeb459fa935d9f89,
          mid_init$_1c345cf73262affe,
          mid_init$_c4b26be37eff0af5,
          mid_init$_df5cef70e3fdc417,
          mid_init$_676a84b2fb6cb2c2,
          mid_getDate_85703d13e302437e,
          mid_shiftedBy_9de3a3e1b3ac3d5a,
          mid_toString_11b109bd155ca898,
          mid_toString_e3ec59f6a2ed4d7c,
          mid_toTaylorProvider_2d8eb60a3ed519a7,
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
