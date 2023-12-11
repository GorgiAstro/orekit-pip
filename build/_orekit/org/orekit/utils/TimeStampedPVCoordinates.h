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
    namespace utils {
      class PVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
      class TimeStamped;
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
          mid_init$_8b5236185db73aff,
          mid_init$_a1f5dc554250f77b,
          mid_init$_8a280baa525bbe55,
          mid_init$_d1b18387f266ab27,
          mid_init$_cbd37fa90c15dcc5,
          mid_init$_06f788959c496621,
          mid_init$_ab5c1802aae2e873,
          mid_init$_c3b70466f3a2d583,
          mid_init$_bfa9bec6e182d19e,
          mid_getDate_7a97f7e149e79afb,
          mid_shiftedBy_abc572ee9de7b188,
          mid_toString_3cffd47377eca18a,
          mid_toString_8873a127a4f312ad,
          mid_toTaylorProvider_2f9a95aa9dd20b18,
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
