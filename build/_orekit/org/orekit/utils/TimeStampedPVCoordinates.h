#ifndef org_orekit_utils_TimeStampedPVCoordinates_H
#define org_orekit_utils_TimeStampedPVCoordinates_H

#include "org/orekit/utils/PVCoordinates.h"

namespace org {
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
          mid_init$_8efeb57fde24921f,
          mid_init$_a6070c42868c5d8c,
          mid_init$_851a055d87a1592a,
          mid_init$_1e47dd5ffc56db57,
          mid_init$_82104ca8525f109d,
          mid_init$_e4bf4a0667705a20,
          mid_init$_1a989c3a0adebecc,
          mid_init$_ce6aad1c634aaa44,
          mid_init$_7963227a1d3edf49,
          mid_getDate_c325492395d89b24,
          mid_shiftedBy_b32704ef18d6aef9,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toString_2ee13d9bd10373d0,
          mid_toTaylorProvider_2d5eb094f644b70b,
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
