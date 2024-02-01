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
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
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
          mid_init$_5883f20309d382ad,
          mid_init$_31e6f8c616daea23,
          mid_init$_9204f9dff7aae59d,
          mid_init$_74a905f732d238fd,
          mid_init$_57454fa8af15e738,
          mid_init$_04ca53ad0bba71dc,
          mid_init$_0daba8f4c17ab86c,
          mid_init$_60ceb85117ebbadb,
          mid_init$_6d066b60bdb16669,
          mid_getDate_80e11148db499dda,
          mid_shiftedBy_1d2bc26bd4fe8250,
          mid_toString_d2c8eb4129821f0e,
          mid_toString_244ea083ab9940d6,
          mid_toTaylorProvider_4bf66d6d931a42d4,
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
